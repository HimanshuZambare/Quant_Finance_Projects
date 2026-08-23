#ifndef FEED_HANDLER_H
#define FEED_HANDLER_H

#include <memory>

#include "IDataSource.h"

class FeedHandler
{
private:

    std::unique_ptr<IDataSource> dataSource;

public:

    explicit FeedHandler(std::unique_ptr<IDataSource> source);

    void start();

};

#endif