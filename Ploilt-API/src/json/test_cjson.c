#include <stdio.h>
#include "json.h"
#include "cJSON.h"

int main()
{
    const char *json_string = "{\"name\": \"John\"}";

    cJSON *json = transform_cjson(json_string);

    json = tratamento_json(json);

    if (json != NULL)
    {
        printf("JSON transformado com sucesso!\n"); }
    else
    {
        printf("Falha ao transformar JSON.\n"); }

    cJSON_Delete(json);

    return 0;
}