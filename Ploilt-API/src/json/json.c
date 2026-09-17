#include "cJSON.h"
#include "stdio.h"
#include "stdlib.h"

#include "request.h"

int transform_cjson() {

// Pega o json e transforma em cJSON

const char *see_json = request_get_body(conn);



cJSON *json = cJSON_Parse(see_json);



};