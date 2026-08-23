#ifndef IDATA_SOURCE_H
#define IDATA_SOURCE_H

#include "Packet.h"

class IDataSource
{
public:

    virtual ~IDataSource() = default;

    virtual bool hasNextPacket() = 0;

    virtual Packet getNextPacket() = 0;

};

#endif
