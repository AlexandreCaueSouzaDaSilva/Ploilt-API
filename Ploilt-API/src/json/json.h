#ifndef JSON_H
#define JSON_H

#include "cJSON.h"

// string JSON em um objeto cJSON (json.c)
cJSON *transform_cjson(const char *json_string);

cJSON *tratamento_json(cJSON *json);

#endif