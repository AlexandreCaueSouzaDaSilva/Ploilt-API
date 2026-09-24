# PLOILT API

PLOILT API é um servidor HTTP desenvolvido em C. O projeto tem como objetivo criar uma API simples e modular, capaz de receber requisições HTTP, processar dados e retornar respostas em JSON.

## Objetivo

* Receber requisições HTTP
* Processar dados enviados pelo cliente
* Trabalhar com JSON
* Retornar respostas em JSON
* Permitir integração com outras aplicações

## Tecnologias

* C
* CivetWeb
* cJSON

## Funcionalidades

### Servidor HTTP

* GET
* POST
* Rotas HTTP
* Respostas em JSON

### Requisições

* Método HTTP
* URI
* Query string
* Headers
* Corpo da requisição

### JSON

O projeto utiliza a biblioteca cJSON para realizar o parsing dos dados JSON recebidos.

Exemplo:

```json
{
    "name": "Kaka"
}
```

## Estrutura do projeto

```text
PLOILT-API/

 src/
   controllers/
   - health.c
   - health.h
   json/
   - json.c
   - json.h
   - test_cjson.c
   request/
   - request.c
   - request.h
   responses/
   - response.c
   - response.h
   routes/
   - routes.c
   - routes.h
   utils/
   - logger.c
   - logger.h
 - main.c
 - server.c
 - server.h
```

## Exemplo

Requisição:

```http
POST /login
Content-Type: application/json
```

Body:

```json
{
    "email": "user@email.com",
    "password": "123456"
}
```

Resposta:

```json
{
    "status": 200,
    "message": "authenticated"
}
```

## Roadmap

### v0.1

* [x] Servidor HTTP
* [x] GET e POST
* [x] Rotas
* [x] Respostas JSON
* [x] Controller de Health

### v0.2

* [x] Query strings
* [x] Headers
* [x] Leitura do corpo da requisição
* [x] Parsing de JSON
* [x] Integração com cJSON

### v0.3

* [ ] Integração entre Request, JSON e Controllers
* [ ] Middleware
* [ ] Logging
* [ ] Configuração dinâmica

### v1.0

* [ ] CLI
* [ ] Arquivo de configuração
* [ ] Documentação

## Licença

MIT License
