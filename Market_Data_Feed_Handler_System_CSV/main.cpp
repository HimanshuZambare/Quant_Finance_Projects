#include <iostream>
#include <memory>

#include "CSVDataSource.h"
#include "FeedHandler.h"

int main()
{
    std::unique_ptr<IDataSource> dataSource =
        std::make_unique<CSVDataSource>("sample_feed.csv");

    FeedHandler feedHandler(std::move(dataSource));

    feedHandler.start();

    return 0;
}