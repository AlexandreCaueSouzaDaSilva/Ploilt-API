#include "response.h"
#include <stdio.h>




void send_json(
    struct mg_connection *conn,
    int status,
    const char *json
)
{
mg_printf(

conn,

    "HTTP/1.1 %d OK\r\n" // Status da resposta
    "Content-Type: application/json\r\n\r\n" // Tipo de conteúdo da resposta
    "%s", // Corpo da resposta, que é o JSON passado como argumento

    status,
    json
);
}

void send_error(
    struct mg_connection *conn,
    int status,
    const char *message
)
{
mg_printf(

conn,

"HTTP/1.1 %d Error\r\n" // Status da resposta
"Content-Type: application/json\r\n\r\n"

"{"

"\"status\": %d," // Status do erro
"\"error\": \"%s\"" // Mensagem de erro


"}",

status,
status,
message

);
}