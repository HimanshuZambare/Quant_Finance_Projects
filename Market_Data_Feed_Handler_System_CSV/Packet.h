#ifndef PACKET_H
#define PACKET_H

#include <vector>
#include <cstdint>

class Packet
{
private:

    uint64_t sequenceNumber;

    std::vector<uint8_t> payload;

public:

    Packet();

    Packet(uint64_t seq,
           const std::vector<uint8_t>& data);

    uint64_t getSequenceNumber() const;

    const std::vector<uint8_t>& getPayload() const;

    uint32_t getLength() const;

};

#endif