#ifndef CSV_DATA_SOURCE_H
#define CSV_DATA_SOURCE_H

#include <fstream>
#include <string>

#include "IDataSource.h"
#include "Packet.h"

class CSVDataSource : public IDataSource
{
private:

    std::ifstream file;

    std::string currentLine;

public:

    explicit CSVDataSource(const std::string& filename);

    ~CSVDataSource() override;

    bool hasNextPacket() override;

    Packet getNextPacket() override;

};

#endif