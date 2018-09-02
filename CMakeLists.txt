cmake_minimum_required(VERSION 3.12)
project(hello_world)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_STANDARD 11)

INCLUDE_DIRECTORIES(include/curl)
LINK_DIRECTORIES(lib)
LINK_LIBRARIES(libcurl ws2_32 wldap32)

add_executable(hello_world main.cpp)

TARGET_LINK_LIBRARIES(hello_world libcurl)