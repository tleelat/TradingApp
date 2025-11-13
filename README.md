# TraderCo
High performance, low latency market trading application written in C++ and ready for custom configuration.

## Configuration
- Set environment variables before running binaries to override defaults.
- `TRADERCO_MAIN_LOG_PATH` controls where the main binary writes logs.
- `TRADERCO_EXCHANGE_SERVER_LOG`, `TRADERCO_MARKET_DATA_PUBLISHER_LOG`, `TRADERCO_SNAPSHOT_SYNTHESIZER_LOG`, `TRADERCO_ORDER_GATEWAY_SERVER_LOG`, `TRADERCO_TRADING_ENGINE_LOG_PREFIX`, `TRADERCO_MARKET_DATA_CONSUMER_LOG_PREFIX`, and `TRADERCO_ORDER_GATEWAY_CLIENT_LOG_PREFIX` allow custom log locations.
- Network endpoints default to placeholders and can be supplied via `TRADERCO_ORDER_GATEWAY_IFACE`, `TRADERCO_ORDER_GATEWAY_PORT`, `TRADERCO_MARKET_DATA_IFACE`, `TRADERCO_MARKET_DATA_INCREMENTAL_IP`, `TRADERCO_MARKET_DATA_INCREMENTAL_PORT`, `TRADERCO_MARKET_DATA_SNAPSHOT_IP`, and `TRADERCO_MARKET_DATA_SNAPSHOT_PORT`.
- Use `.env` files or your preferred secrets manager to populate the variables with deployment-specific values.
