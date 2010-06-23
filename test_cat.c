#include <stdio.h>
#include "json_cat.h"

int main(int argc, char* argv[])
{
    json_cat* json = json_cat_create();
    if (json->load(json, argv[1])
            ->obj(json, "category")
            ->idx(json, 0)
            ->obj(json, "list")
            ->idx(json, 0)
            ->obj(json, "id")
            ->isInt(json) == true) {
        printf("%d\n", json->getInt(json));
    }
    if (json->reset(json)
            ->obj(json, "category")
            ->idx(json, 0)
            ->obj(json, "list")
            ->idx(json, 0)
            ->obj(json, "name")
            ->isString(json) == true) {
        printf("%s\n", json->getString(json));
    }
    if (json->reset(json)
            ->obj(json, "category")
            ->idx(json, 0)
            ->obj(json, "list")
            ->idx(json, 0)
            ->obj(json, "ratio")
            ->isDouble(json) == true) {
        printf("%lf\n", json->getDouble(json));
    }
    if (json->reset(json)
            ->obj(json, "category")
            ->idx(json, 0)
            ->obj(json, "list")
            ->idx(json, 0)
            ->obj(json, "married")
            ->isBool(json) == true) {
        printf("%d\n", json->getBool(json));
    }
    json->destroy(json);
    return 0;
}
