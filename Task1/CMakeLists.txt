cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Debug)

set(SOURCE_FILES memory_layout.c)

set(SOURCE_FILES2 process_creation.c)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

SET(CMAKE_C_FLAGS "-m64 -g -O0 -D_DEBUG -Wall")

project(memory_layout)

add_executable(memory_layout ${SOURCE_FILES})

project(process_creation)

add_executable(process_creation ${SOURCE_FILES2})

