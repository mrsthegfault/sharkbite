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
#ifndef SOURCE_H_
#define SOURCE_H_

#include <string>
#include <cstdint>
#include <vector>

#include "./constructs/Results.h"
#include "../data/constructs/client/Instance.h"
#include "../data/constructs/server/ServerDefinition.h"
#include "../data/constructs/server/RangeDefinition.h"
#include "../data/constructs/IterInfo.h"
#include "../data/constructs/column.h"

namespace scanners {

template<typename T, class BlockType>
class Source {
 public:
  Source() {
    iters = new std::vector<cclient::data::IterInfo*>();
  }

  virtual void addRange(std::unique_ptr<cclient::data::Range> range) = 0;

  virtual void addRange(const cclient::data::Range &range) = 0;

  /**
   * Add the list of user supplied Iterators;
   */
  void addIterators(std::vector<cclient::data::IterInfo*> *iterV) {
    iters->insert(iters->end(), iterV->begin(), iterV->end());
  }

  virtual void locateFailedTablet(std::vector<cclient::data::Range*> ranges, std::vector<std::shared_ptr<cclient::data::tserver::RangeDefinition>> *locatedTablets) = 0;

  virtual Results<T, BlockType> *getResultSet() = 0;

  //virtual void addResults(Results<T, BlockType> *results) = 0;

  virtual ~Source() {
    for (auto iter : *iters) {
      delete iter;
    }
    delete iters;
    for (auto column : columns) {
      delete column;
    }
  }

  std::vector<cclient::data::Column*> *getColumns() {
    return &columns;
  }

  std::vector<cclient::data::IterInfo*> *getIters() {
    return iters;
  }

  virtual cclient::data::Instance *getInstance() = 0;

  void fetchColumn(std::string col, std::string colqual = "") {
    if (!IsEmpty(&colqual)) {
      columns.push_back(new cclient::data::Column(col, colqual));
    } else
      columns.push_back(new cclient::data::Column(col));
  }
 protected:
  std::vector<cclient::data::Column*> columns;
  std::vector<cclient::data::IterInfo*> *iters;
};
}
#endif /* SCANNER_H_ */
