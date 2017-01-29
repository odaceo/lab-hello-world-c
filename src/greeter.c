// Copyright (C) 2017 Odaceo. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HELLO_GREETINGS "Hello, %s!"

char* greeter_allocate(const char* greetings, const char* name) {
    return (char *) malloc((strlen(greetings) + strlen(name) + 1) * sizeof(char));
}

char* greeter_sayhello(const char* name) {
    char* str = greeter_allocate(HELLO_GREETINGS, name);
    sprintf(str, HELLO_GREETINGS, name);
    return str;
}
