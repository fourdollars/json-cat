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
#include <features.h>
#include <stdbool.h>
#ifndef __JSON_CAT_H__
#define __JSON_CAT_H__
__BEGIN_DECLS
typedef enum json_cat_type {
    JC_FROM_OBJECT,
    JC_FROM_ARRAY,
} json_cat_type;
typedef struct json_cat json_cat;
extern json_cat* json_cat_create(void);
struct json_cat {
    void* _priv;

    json_cat* (*load) (json_cat* cat, const char* file);
    json_cat* (*feed) (json_cat* cat, const char* fish);
    json_cat* (*http) (json_cat* cat, const char* url);
    json_cat* (*object) (json_cat* cat, const char* string);
    json_cat* (*sibling) (json_cat* cat, const char* string);
    json_cat* (*array) (json_cat* cat, unsigned int index);
    json_cat* (*parent) (json_cat* cat);
    json_cat* (*grandparent) (json_cat* cat);
    json_cat* (*reset) (json_cat* cat);

    bool (*isObject) (json_cat* cat);
    bool (*isArray) (json_cat* cat);

    bool (*isString) (json_cat* cat);
    bool (*isInt) (json_cat* cat);
    bool (*isDouble) (json_cat* cat);
    bool (*isBool) (json_cat* cat);

    void (*destroy) (json_cat* cat);

    const char* (*getString) (json_cat* cat);
    int (*getInt) (json_cat* cat);
    double (*getDouble) (json_cat* cat);
    bool (*getBool) (json_cat* cat);
    unsigned int (*length) (json_cat* cat);
};
__END_DECLS
#endif //__JSON_CAT_H__
