cmake_minimum_required(VERSION 3.26)
project(Modbus)

Set(CMAKE_CXX_STANDARD 11)

file(GLOB_RECURSE SRC_FILES src/*.cpp)

add_executable(main ${SRC_FILES})
include_directories(include)
