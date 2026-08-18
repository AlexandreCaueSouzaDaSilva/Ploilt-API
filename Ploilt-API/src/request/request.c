#include "request.h"
#include <stdlib.h>

#define LIMIT_DATA 6500
//Modulo Request (Encapsulamentos de funções do civetweb para requisições HTTP)


// get do method
const char *request_get_method(
    struct mg_connection *conn
)

{
const struct mg_request_info *req;

req = mg_get_request_info(conn);
return req->request_method;
}

// get do uri = significa o caminho do recurso requisitado
const char *request_get_uri(
    struct mg_connection *conn
) {
    const struct mg_request_info *req;

    req = mg_get_request_info(conn);
    return req->request_uri;

}

// get do query = significa a query string da requisição
const char *request_get_query(
    struct mg_connection *conn
) {
    const struct mg_request_info *req;

    req = mg_get_request_info(conn);
    return req->query_string;
}

// Header
const char *request_get_header(
    struct mg_connection *conn,
    const char *header_name
)
{
    return mg_get_header(conn, header_name);
};



// Body
const char *request_get_body(
    struct mg_connection *conn
)
{   


    char *data = malloc(LIMIT_DATA + 1);

    int bytes_read = mg_read(
        conn,
        data,
        LIMIT_DATA
    );
    
    if (bytes_read >= 0) {
        data[bytes_read] = '\0'; // adiciiona o null terminator
    }
    else {
        data[0] = '\0'; // caso de erro de leitura, retorna vazio
    }

    return data;
}