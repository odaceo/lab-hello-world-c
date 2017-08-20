# Copyright (C) 2017 Odaceo. All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

project (Hello)
cmake_minimum_required (VERSION 3.2)

# add the search path for include files
include_directories (include)

# add the sources using wildcard
file(GLOB SOURCES src/*.c)

# build static executable
set(CMAKE_EXE_LINKER_FLAGS -static)
set(CMAKE_SHARED_LIBRARY_LINK_C_FLAGS)

# add the executable
add_executable(hello ${SOURCES})

