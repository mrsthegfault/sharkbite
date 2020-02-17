/*
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SCANNER_H_
#define SCANNER_H_

#include <algorithm>
#include <map>
#include <memory>
#include <string>
#include <set>
#include <mutex>

#include "../Source.h"
#include "../../data/constructs/Key.h"
#include "../../data/constructs/security/AuthInfo.h"
#include "../../data/constructs/security/Authorizations.h"
#include "../../data/constructs/value.h"
#include "../constructs/Results.h"
#include "../../data/constructs/inputvalidation.h"
#include "../../data/client/ExtentLocator.h"
#include "../../data/exceptions/ClientException.h"
#include "../../data/constructs/client/zookeeperinstance.h"
#include "../../data/client/LocatorCache.h"
#include "../constructs/ServerHeuristic.h"
#include "../../interconnect/ClientInterface.h"
#include "../../interconnect/tableOps/TableOperations.h"
#include "logging/LoggerConfiguration.h"
#include "logging/Logger.h"

namespace scanners {

/**string
 Scanner scans uses the interconnect to retrieve Keys and Values from the data source.
 **/
class Scanner : public scanners::Source<cclient::data::KeyValue, ResultBlock<cclient::data::KeyValue>> {
 public:
  /**
   * Scanner constructor
   * @param instance connector instance
   * @param top table operations refereuce
   * @param auths authorizations
   * @param threads threads for the scanner
   **/
  Scanner(std::shared_ptr<cclient::data::Instance> instance, interconnect::TableOperations<cclient::data::KeyValue, ResultBlock<cclient::data::KeyValue>> *tops, cclient::data::security::Authorizations *auths,
          uint16_t threads);

  virtual void addRange(const cclient::data::Range &range) override {
    auto newRange = std::make_shared<cclient::data::Range>(range.getStartKey(),range.getStartKeyInclusive(),range.getStopKey(),range.getStopKeyInclusive(),false);
    logging::LOG_TRACE(logger) << "passing in ranges " << range << " " << *newRange.get();
    ranges.push_back(newRange);
  }

  /**
   * Adds a range to the scanner
   * @param range
   **/
  virtual void addRange(std::unique_ptr<cclient::data::Range> range) override {
    std::lock_guard<std::mutex> lock(scannerLock);
    // we are now the owner
    std::shared_ptr<cclient::data::Range> sharedRange = std::move(range);
    ranges.push_back(sharedRange);

  }

  /**
   * Returns a result set.
   * @return results iterator.
   **/
  Results<cclient::data::KeyValue, ResultBlock<cclient::data::KeyValue>>* getResultSet() override {
    std::lock_guard<std::mutex> lock(scannerLock);

    if (IsEmpty(&ranges)) {
      throw cclient::exceptions::ClientException(RANGE_NOT_SPECIFIED);
    }
    if (IsEmpty(resultSet) && IsEmpty(&servers)) {

      for(const auto &range : ranges){
        logging::LOG_TRACE(logger) << "range is " << *range.get();
      }

      resultSet = new Results<cclient::data::KeyValue, ResultBlock<cclient::data::KeyValue>>();

      std::map<std::string, std::map<std::shared_ptr<cclient::data::KeyExtent>, std::vector<std::shared_ptr<cclient::data::Range>>, pointer_comparator<std::shared_ptr<cclient::data::KeyExtent> > > > returnRanges;
      std::set<std::string> locations;
      tableLocator->binRanges(credentials, &ranges, &locations, &returnRanges);

      for (std::string location : locations) {
        logging::LOG_TRACE(logger) << " Evaluating ranges for " << location;
        std::vector<std::string> locationSplit = split(location, ':');
        if (locationSplit.size() != 2) {

        }
        char *res = 0;
        errno = 0;
        uint64_t port = strtoul(locationSplit.at(1).c_str(), &res, 10);
        if (((port == (uint64_t) LONG_MIN || port == (uint64_t) LONG_MAX) && errno != 0) || *res != '\0') {
          throw cclient::exceptions::ClientException( INVALID_SERVER_PORT);
        }
        for (auto hostExtents : returnRanges.at(location)) {
          std::vector<std::shared_ptr<cclient::data::KeyExtent> > extents;
          for (const auto &rng : hostExtents.second) {
            logging::LOG_DEBUG(logger) << " extent is " << hostExtents.first;
            if (!rng->getInfiniteStartKey())
              logging::LOG_DEBUG(logger) << " extent is " << rng->getStartKey()->getRowStr();
          }
          extents.push_back(hostExtents.first);

          auto extentRange = hostExtents.first->toRange();
          // clip the ranges into the extents
          std::vector<std::shared_ptr<cclient::data::Range>> clippedRanges;

          for(const auto &range : hostExtents.second){
            logging::LOG_DEBUG(logger) << " begin range is " << *extentRange.get();
            logging::LOG_DEBUG(logger) << " begin range is " << *range.get() << " " << *extentRange.get();
            auto rng = extentRange->intersect(range);
            if (nullptr == rng){
              logging::LOG_DEBUG(logger) << " clipped range is null " << *range.get() << " " << *extentRange.get();
              clippedRanges.push_back(range);
            }
            else{
              logging::LOG_DEBUG(logger) << " clipped range is " << *rng.get() << " from " << *range.get() << " and " << *extentRange.get();
              clippedRanges.push_back( rng );
            }
          }

          logging::LOG_DEBUG(logger) << " clipped range is " << std::to_string( clippedRanges.size() );

          auto rangeDef = std::make_shared<cclient::data::tserver::RangeDefinition>(credentials, scannerAuths, locationSplit.at(0), port, &clippedRanges, &extents, columns);

          std::shared_ptr<interconnect::ServerInterconnect> directConnect = std::make_shared<interconnect::ServerInterconnect>(rangeDef, connectorInstance->getConfiguration());
          scannerHeuristic->addClientInterface(directConnect);
        }
      }

      // begin the scan, however the pre-configured heuristic chooses
      scannerHeuristic->scan(this);

    }

    return resultSet;
  }

  void addResults(Results<std::shared_ptr<cclient::data::KeyValue>, ResultBlock<std::shared_ptr<cclient::data::KeyValue>>> *results) {

  }

  virtual ~Scanner() {
    if (!IsEmpty(resultSet)) {
      delete resultSet;
    }
  }

  std::shared_ptr<cclient::data::Instance>  getInstance() override {
    return connectorInstance;
  }

  void locateFailedTablet(std::vector<std::shared_ptr<cclient::data::Range>> ranges, std::vector<std::shared_ptr<cclient::data::tserver::RangeDefinition>> *locatedTablets) override {
    std::map<std::string, std::map<std::shared_ptr<cclient::data::KeyExtent>, std::vector<std::shared_ptr<cclient::data::Range>>, pointer_comparator<std::shared_ptr<cclient::data::KeyExtent> > > > returnRanges;
    std::set<std::string> locations;
    tableLocator->invalidateCache();
    tableLocator->binRanges(credentials, &ranges, &locations, &returnRanges);

    for (std::string location : locations) {
      std::vector<std::string> locationSplit = split(location, ':');
      if (locationSplit.size() != 2) {

      }
      char *res = 0;
      errno = 0;
      uint64_t port = strtoul(locationSplit.at(1).c_str(), &res, 10);
      if (((port == (uint64_t) LONG_MIN || port == (uint64_t) LONG_MAX) && errno != 0) || *res != '\0') {
        throw cclient::exceptions::ClientException( INVALID_SERVER_PORT);
      }
      for (auto hostExtents : returnRanges.at(location)) {
        std::vector<std::shared_ptr<cclient::data::KeyExtent> > extents;
        extents.push_back(hostExtents.first);
        auto rangeDef = std::make_shared<cclient::data::tserver::RangeDefinition>(credentials, scannerAuths, locationSplit.at(0), port, &hostExtents.second, &extents, columns);

        locatedTablets->push_back(rangeDef);
      }
    }
  }

  void close() override {
    scannerHeuristic->close();
  }

 protected:

  /**
   * Flushes the scanner
   * @param override ensures that flushes occur despite not meeting requirements
   **/
  void flush(bool override = false);

  /**
   * Adds a connecting server definition
   * @param ifc server definition
   **/
  void addServerDefinition(interconnect::ClientInterface<interconnect::ThriftTransporter> *ifc) {
    servers.push_back(ifc);
  }

  /**
   * Adds a vector of connecting server definition
   * @param ifc server definition
   **/
  void addServerDefinition(std::vector<interconnect::ClientInterface<interconnect::ThriftTransporter>*> ifc) {
    servers.insert(servers.end(), ifc.begin(), ifc.end());
  }

  // scanner
  std::mutex scannerLock;
  // vector of ranges to interrogate.
  std::vector<std::shared_ptr<cclient::data::Range>> ranges;
  // result set iterator
  Results<cclient::data::KeyValue, ResultBlock<cclient::data::KeyValue>> *resultSet;
  // credentials
  cclient::data::security::AuthInfo *credentials;
  // scanner authorizations
  cclient::data::security::Authorizations *scannerAuths;
  // servers to access
  std::vector<interconnect::ClientInterface<interconnect::ThriftTransporter>*> servers;
  // zookeeper instance
  std::shared_ptr<cclient::data::Instance> connectorInstance;
  // scanner heuristic to control server access
  std::unique_ptr<ScannerHeuristic> scannerHeuristic;
  // tablet locator
  cclient::impl::TabletLocator *tableLocator;

 private:
  std::shared_ptr<logging::Logger> logger;
};

template<class T>
using Iterator = Results<T, ResultBlock<T>>;

using BatchScanner =scanners::Source<cclient::data::KeyValue, ResultBlock<cclient::data::KeyValue>>;
}
#endif /* SCANNER_H_ */

