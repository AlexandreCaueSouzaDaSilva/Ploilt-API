#include "cJSON.h"
#include <stdio.h>


cJSON *transform_cjson(const char *json_string) {

    // Pega o json e transforma em cJSON
    cJSON *json = cJSON_Parse(json_string);

  return json;
}

cJSON *tratamento_json (cJSON *json) {
    // verifica se o json é nulo
    if (json != NULL) {

    return json;
    }

    else {
        // se não
        printf("Erro ao transformar a string JSON em cJSON: %s\n", cJSON_GetErrorPtr());
        return NULL;
    }
}