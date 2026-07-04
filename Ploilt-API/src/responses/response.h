#ifndef RESPONSE_H
#define RESPONSE_H
#include "../../civetweb/src/civetweb.h"


void send_json(
    struct mg_connection *conn,
    int status,
    const char *json
);

void send_error(
    struct mg_connetion *conn,
    int status,
    const char *message
);


#endif // RESPONSE_H