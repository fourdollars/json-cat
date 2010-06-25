/**
 * Copyright 2010 Shih-Yuan Lee (FourDollars)
 *
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
#include <stdio.h>
#include "json_cat.h"

int main(int argc, char* argv[])
{
    json_cat* json = json_cat_create();
    json->load(json, argv[1]);
    if (json->isArray(json) == true) {
        unsigned int i = 0;
        unsigned int length = json->length(json);

        for (i = 0; i < length; i++) {
            if (json->array(json, i)
                    ->object(json, "name")
                    ->isString(json) == true) {
                printf("%s\n", json->getString(json));
                printf("%s\n", json->sibling(json, "address")->getString(json));
                printf("%s\n", json->sibling(json, "phone")->getString(json));
                json->parent(json)->parent(json);
            }
        }
    }
    json->destroy(json);
    return 0;
}
