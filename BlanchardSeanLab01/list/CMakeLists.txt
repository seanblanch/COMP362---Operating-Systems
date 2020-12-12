
project(list C)

set(CMAKE_C_STANDARD 11)

SET(CMAKE_C_FLAGS "-m64 -g -O0 -D_DEBUG -Wall")

set(SOURCE_FILES main.c list.c)

set(CMAKE_BUILD_TYPE Debug)

add_executable(list ${SOURCE_FILES})


