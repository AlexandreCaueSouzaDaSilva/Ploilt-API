#ifndef(JSON_H)
#define JSON_H
#include "cJSON.h"

// Função para transformar uma string JSON em um objeto cJSON (json.c)
cJSON *transform_cjson(const char *json_string);

#endif // JSON_H
