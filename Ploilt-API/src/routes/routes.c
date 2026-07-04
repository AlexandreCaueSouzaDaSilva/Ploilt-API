#include "routes.h" // inclui o header da rota
#include "../controllers/health.h"
#include "../../civetweb/src/civetweb.h"

void register_routers(
    struct mg_context *ctx
)

{mg_set_request_handler(ctx, "/health",health_handler, NULL);
}
