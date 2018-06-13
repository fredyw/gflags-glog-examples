cmake_minimum_required(VERSION 3.0)
project(gflogs_example)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(gflags)
add_subdirectory(glog)

add_executable(gflog main.cpp)
target_link_libraries(gflog gflags glog)
