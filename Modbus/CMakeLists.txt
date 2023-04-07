cmake_minimum_required(VERSION 3.26)
project(modbus-example)

Set(CMAKE_CXX_STANDARD 11)

find_package(Modbus REQUIRED)

file(GLOB_RECURSE SRC_FILES src/*.cpp)

add_executable(drawing ${SRC_FILES})
include_directories(include)
target_link_libraries(drawing ${modbus_LIBRARIES})
