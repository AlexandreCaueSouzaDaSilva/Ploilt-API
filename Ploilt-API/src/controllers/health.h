
#ifndef HEALTH_H
#define HEALTH_H

#include "../../civetweb/src/civetweb.h"

// Handler da rota de health

int health_handler(struct mg_connection *conn, void *cbdata); // Função que lida com as requisições para a rota de health


#endif