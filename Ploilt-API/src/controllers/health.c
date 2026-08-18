#include "health.h"
#include "../../civetweb/src/civetweb.h"


int health_handler(
    struct mg_connection *conn,
    void *cbdata
){

// Implementação

(void)cbdata;

send_json(
    conn,
    200,
    "{" // open
    "\"status\": 200,"
    "\"message\": \"PLOILT API rodando...\""
    "}" // close da aspas
);


return 200;

};