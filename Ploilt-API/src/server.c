#include <stdio.h>
#include "server.h"
#include "../civetweb/src/civetweb.h"

static int request_handler_(struct mg_connection *conn, void *cbdata) {

    mg_printf(
        conn,
        "HTTP/1.1 200 OK\r\n"
        "Content-Type: application/json\r\n\r\n"
        "{ \"status\": 200, \"message\": \"Ploilt API rodando...\" }"
    );

    return 200;
}

void start_server() {

    const char *options[] = {
        "listening_ports", "8080",
        0
    };

    struct mg_callbacks callbacks;
    struct mg_context *ctx;

    callbacks = (struct mg_callbacks){0};

    ctx = mg_start(&callbacks, 0, options);

    if (ctx == NULL) {
        printf("Erro ao iniciar servidor.\n");
        return;
    }

    mg_set_request_handler(ctx, "/", request_handler_, 0);

    printf("Servidor iniciado em http://localhost:8080\n");
    printf("Ploilt API aguardando requisicoes...\n");

    getchar();

    mg_stop(ctx);
}