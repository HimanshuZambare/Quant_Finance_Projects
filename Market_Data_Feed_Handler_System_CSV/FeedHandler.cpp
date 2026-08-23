#include "FeedHandler.h"

#include <iostream>
#include <iomanip>

FeedHandler::FeedHandler(std::unique_ptr<IDataSource> source)
    : dataSource(std::move(source))
{
}

void FeedHandler::start()
{
    while (dataSource->hasNextPacket())
    {
        Packet packet = dataSource->getNextPacket();

        std::cout << "-------------------------------------\n";
        std::cout << "Packet Received\n";
        std::cout << "Sequence Number : "
                  << packet.getSequenceNumber() << '\n';

        std::cout << "Packet Length   : "
                  << packet.getLength() << " bytes\n";

        std::cout << "Payload         : ";

        for (uint8_t byte : packet.getPayload())
        {
            std::cout << static_cast<char>(byte);
        }

        std::cout << "\n";
    }
}