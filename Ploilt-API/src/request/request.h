#ifndef REQUEST_H
#define REQUEST_H

#include "../../civetweb/src/civetweb.h"

// Declarações

const char *request_get_method(
    struct mg_connection *conn
);

const char *request_get_uri(
    struct mg_connection *conn
);

const char *request_get_query(
    struct mg_connection *conn
);

const char *request_get_header(
    struct mg_connection *conn,
    const char *header_name
);

#endif // REQUEST_H