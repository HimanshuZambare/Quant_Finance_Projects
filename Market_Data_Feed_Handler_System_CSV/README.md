# Market Data Feed Handler (C++)

A simplified Market Data Feed Handler built in Modern C++.

## Features

- Read market data from CSV
- Packet abstraction
- Data source abstraction
- Feed Handler architecture
- Modular C++ project structure
- CMake build system

## Project Structure

```
MarketDataFeedHandler/
│
├── CMakeLists.txt
├── README.md
│
├── include/
│   ├── CommonTypes.h
│   ├── Packet.h
│   ├── IDataSource.h
│   ├── CSVDataSource.h
│   └── FeedHandler.h
│
├── src/
│   ├── main.cpp
│   ├── Packet.cpp
│   ├── CSVDataSource.cpp
│   └── FeedHandler.cpp
│
├── data/
│   └── sample_feed.csv
```

## Build

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

## Run

Linux/macOS

```bash
./MarketDataFeedHandler
```

Windows

```bash
MarketDataFeedHandler.exe
```

## Current Progress

- [x] Project Setup
- [x] Packet Class
- [x] IDataSource Interface
- [x] CSV Data Source
- [x] Feed Handler
- [ ] Parser
- [ ] Validator
- [ ] Normalizer
- [ ] Publisher
- [ ] Order Book
- [ ] UDP Receiver
- [ ] Multithreading
- [ ] NASDAQ ITCH Parser

## Future Enhancements

- Binary packet parser
- NASDAQ TotalView-ITCH support
- UDP socket receiver
- Lock-free ring buffer
- Limit Order Book
- Matching Engine
- Performance benchmarking
- Unit testing