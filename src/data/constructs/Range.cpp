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

#include "data/constructs/Range.h"

namespace cclient {
namespace data {

Range::~Range() {

}

Range::Range()
    :
    start(NULL),
    stop(NULL),
    startKeyInclusive(true),
    stopKeyInclusive(false) {
  infiniteStartKey = true;
  infiniteStopKey = true;
}

Range::Range(const std::string &row)
    :
    Range(row, true, row, true) {
}

Range::Range(const std::string &startRow, bool startInclusive, const std::string &endRow, bool endKeyInclusive)
    :startKeyInclusive(startInclusive),
    stopKeyInclusive(endKeyInclusive) {

  start = std::make_shared<cclient::data::Key>();
  stop = std::make_shared<cclient::data::Key>();
  start->setRow(startRow);
  stop->setRow(endRow);
  infiniteStartKey = startRow.empty();
  infiniteStopKey = endRow.empty();

  if (stopKeyInclusive  && stop != nullptr) {
    std::pair<char*, size_t> row = stop->getRow();
    char *newRow = new char[row.second + 1];
    memset(newRow, 0x00, row.second + 1);
    memcpy(newRow, row.first, row.second);
    stop->setRow(newRow, row.second + 1);
    delete[] newRow;
  }
  if (!infiniteStartKey && !infiniteStopKey && (*stop < *start)) {
    throw new cclient::exceptions::IllegalArgumentException("Start key must be less than end key in range");
  }
}

Range::Range(std::shared_ptr<Key> startKey, bool startInclusive, std::shared_ptr<Key> endKey, bool endKeyInclusive, bool update)
    :
    start(startKey),
    startKeyInclusive(startInclusive),
    stop(endKey),
    stopKeyInclusive(endKeyInclusive) {
  infiniteStartKey = startKey == NULL;
  infiniteStopKey = stop == NULL;

  if (stopKeyInclusive && stop != nullptr && update) {
    std::pair<char*, size_t> row = stop->getRow();
    char *newRow = new char[row.second + 1];
    memset(newRow, 0x00, row.second + 1);
    memcpy(newRow, row.first, row.second);
    stop->setRow(newRow, row.second + 1);
    delete[] newRow;
  }
  if (!infiniteStartKey && !infiniteStopKey && (*stop < *start)) {
    throw new cclient::exceptions::IllegalArgumentException("Start key must be less than end key in range");
  }
}

} /* namespace data */
} /* namespace cclient */
