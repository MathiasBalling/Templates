cmake_minimum_required(VERSION 3.26)
project(wx-myapp)

Set(CMAKE_CXX_STANDARD 11)

find_package(wxWidgets REQUIRED COMPONENTS net core base)
if(wxWidgets_USE_FILE) # not defined in CONFIG mode
    include(${wxWidgets_USE_FILE})
endif()

file(GLOB_RECURSE SRC_FILES src/*.cpp)

add_executable(myapp ${SRC_FILES})
include_directories(include)
target_link_libraries(myapp ${wxWidgets_LIBRARIES})
