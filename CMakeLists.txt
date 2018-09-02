cmake_minimum_required(VERSION 3.12)
project(hello_world)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_STANDARD 11)

set(LINK_DIR E:/04-project/c_project/git_project/hello_world/lib)
INCLUDE_DIRECTORIES(include/curl)
LINK_DIRECTORIES(lib)

add_executable(hello_world main.c)

TARGET_LINK_LIBRARIES(hello_world ${LINK_DIR}/libcurl.a ${LINK_DIR}/libcurldll.a ${LINK_DIR}/libwldap32.a ${LINK_DIR}/libws2_32.a )