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


struct FateOperationAccumuloOne {
  enum type {
    TABLE_CREATE = 0,
    TABLE_CLONE = 1,
    TABLE_DELETE = 2,
    TABLE_RENAME = 3,
    TABLE_ONLINE = 4,
    TABLE_OFFLINE = 5,
    TABLE_MERGE = 6,
    TABLE_DELETE_RANGE = 7,
    TABLE_BULK_IMPORT = 8,
    TABLE_COMPACT = 9,
    TABLE_IMPORT = 10,
    TABLE_EXPORT = 11,
    TABLE_CANCEL_COMPACT = 12,
    NAMESPACE_CREATE = 13,
    NAMESPACE_DELETE = 14,
    NAMESPACE_RENAME = 15
  };
};
