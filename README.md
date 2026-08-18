# PLOILT API

PLOILT API é um servidor HTTP modular escrito em C, projetado para funcionar como uma camada universal de comunicação entre aplicações de diferentes linguagens.

O projeto recebe requisições HTTP, processa dados e responde em JSON, permitindo integração entre frontend, backend e clientes diversos.



## Objetivo

Criar uma API leve, rápida e modular em C que possa:

- Receber requisições HTTP
- Processar dados de entrada
- Retornar respostas padronizadas em JSON
- Integrar aplicações independentemente da linguagem



## Principais funcionalidades

### Servidor HTTP
- Suporte a métodos:
  - GET
  - POST
  - PUT
  - DELETE

### Processamento de requisições
- Parsing de JSON
- Query strings
- Headers HTTP

Exemplo:

GET /users?id=1

Headers:
Authorization: Bearer token

Body:
{
   "name": "Kaka"
}

---

## Resposta universal

Todas as respostas seguem padrão JSON.

### Sucesso
```json
{
   "status": 200,
   "message": "success",
   "data": {}
}
```

### Erro
```json
{
   "status": 404,
   "error": "Not found"
}
```

---

## Integrações suportadas

Frontend:
- JavaScript
- React
- Vue

Clients / Backends:
- Python
- Java
- Go
- Node.js
- C#
- Qualquer linguagem com suporte HTTP

---

## Tecnologias

- C
- CivetWeb
- cJSON

---

## Estrutura do projeto

```bash
ploilt-api/

 src/
   controllers/
   - health.c
   - health.h
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

---

## CLI

Comando:

```bash
ploilt --view
```

Saída:

```bash
Port: 8080
API: running
Clients connected: 5
Memory: 12MB
Routes loaded: 8
```

Permite monitoramento em tempo real da aplicação.

---

## Roadmap

### v0.1
- [x] Servidor HTTP
- [x] GET e POST
- [x] Respostas JSON

### v0.2
- [ ] Parsing JSON
- [ ] Query strings
- [ ] Headers

### v0.3
- [ ] Middleware
- [ ] Logging
- [ ] Configuração dinâmica

### v1.0
- [ ] CLI completa
- [ ] Arquivo de configuração
- [ ] Documentação oficial

---

## Exemplo de uso

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

---

## Filosofia

PLOILT API busca unir:

- Performance de baixo nível
- Modularidade
- Compatibilidade universal
- Simplicidade de integração

---

## Licença

MIT License