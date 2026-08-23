cmake_minimum_required(VERSION 3.16)

project(MarketDataFeedHandler VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(MarketDataFeedHandler
    main.cpp
    Packet.cpp
    CSVDataSource.cpp
    FeedHandler.cpp
)

target_include_directories(MarketDataFeedHandler PRIVATE .)

configure_file(${CMAKE_SOURCE_DIR}/sample_feed.csv ${CMAKE_BINARY_DIR}/sample_feed.csv COPYONLY)