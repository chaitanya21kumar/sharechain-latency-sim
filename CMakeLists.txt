cmake_minimum_required(VERSION 3.10)
project(sharechain-latency-sim)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(sim_driver
    src/main.cpp
    src/Node.cpp
    src/LatencyChannel.cpp
    src/ShareGraph.cpp
)
