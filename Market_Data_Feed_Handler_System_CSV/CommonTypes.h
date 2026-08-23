#ifndef COMMON_TYPES_H
#define COMMON_TYPES_H

#include <string>
#include <cstdint>

/*
|--------------------------------------------------------------------------
| Message Types
|--------------------------------------------------------------------------
| Represents different types of market events received from an exchange.
*/

enum class MessageType
{
    ADD,
    MODIFY,
    CANCEL,
    EXECUTE,
    TRADE,
    UNKNOWN
};

/*
|--------------------------------------------------------------------------
| Order Side
|--------------------------------------------------------------------------
*/

enum class Side
{
    BUY,
    SELL,
    UNKNOWN
};

/*
|--------------------------------------------------------------------------
| Normalized Market Message
|--------------------------------------------------------------------------
| This is the common format that every exchange-specific parser will
| convert to.
*/

struct MarketMessage
{
    uint64_t sequence = 0;

    MessageType type = MessageType::UNKNOWN;

    std::string symbol;

    Side side = Side::UNKNOWN;

    double price = 0.0;

    uint32_t quantity = 0;
};

#endif