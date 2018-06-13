cmake_minimum_required(VERSION 3.0)
project(gflags_glog_examples)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(gflags)
add_subdirectory(glog)

add_executable(main main.cpp)
target_link_libraries(main gflags glog)
