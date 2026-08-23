#include "Packet.h"

Packet::Packet()
    : sequenceNumber(0)
{
}

Packet::Packet(uint64_t seq, const std::vector<uint8_t>& data)
    : sequenceNumber(seq), payload(data)
{
}

uint64_t Packet::getSequenceNumber() const
{
    return sequenceNumber;
}

const std::vector<uint8_t>& Packet::getPayload() const
{
    return payload;
}

uint32_t Packet::getLength() const
{
    return static_cast<uint32_t>(payload.size());
}
