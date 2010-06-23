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
