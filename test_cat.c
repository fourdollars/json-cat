#include <stdio.h>
#include "json_cat.h"

int main(int argc, char* argv[])
{
    json_cat* json = json_cat_create();
    if (json->load(json, argv[1])->object(json, "subject")->isArray(json) == true) {
        unsigned int i = 0;
        unsigned int length = json->length(json);

        for (i = 0; i < length; i++) {
            if (json->reset(json)
                    ->object(json, "subject")
                    ->array(json, i)
                    ->isString(json) == true) {
                printf("%s\n", json->getString(json));
            }
        }
    }
    json->destroy(json);
    return 0;
}
