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
#ifndef BINDINGS_H
#define BINDINGS_H 1
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#define DEFINE_RUNTIME_EXCEPTION(name, type) \
    class name : public pybind11::builtin_exception { public: \
        using pybind11::builtin_exception::builtin_exception; \
        name() : name("") { } \
        void set_error() const override { PyErr_SetString(type, what()); } \
    };


DEFINE_RUNTIME_EXCEPTION(stop_async_iteration, PyExc_StopAsyncIteration)

#include <memory>


#endif
