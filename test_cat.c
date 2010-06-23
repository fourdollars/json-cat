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
