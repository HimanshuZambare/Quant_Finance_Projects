#include "CSVDataSource.h"
#include "Packet.h"

#include <iostream>
#include <sstream>
#include <vector>

CSVDataSource::CSVDataSource(const std::string& filename)
{
    file.open(filename);

    if (!file.is_open())
    {
        std::cerr << "Failed to open file: " << filename << std::endl;
    }

    // Skip CSV header
    std::getline(file, currentLine);
}

CSVDataSource::~CSVDataSource()
{
    if (file.is_open())
    {
        file.close();
    }
}

bool CSVDataSource::hasNextPacket()
{
    if (!file.is_open())
        return false;

    return static_cast<bool>(std::getline(file, currentLine));
}

Packet CSVDataSource::getNextPacket()
{
    std::stringstream ss(currentLine);
    std::string token;

    uint64_t sequence = 0;
    std::vector<uint8_t> payload;

    bool firstField = true;

    while (std::getline(ss, token, ','))
    {
        if (firstField)
        {
            sequence = std::stoull(token);
            firstField = false;
        }
        else
        {
            payload.insert(payload.end(), token.begin(), token.end());
            payload.push_back(',');
        }
    }

    if (!payload.empty())
    {
        payload.pop_back(); // Remove trailing comma
    }

    return Packet(sequence, payload);
}