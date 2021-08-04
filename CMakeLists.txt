cmake_minimum_required(VERSION 3.2)
project(pong)

set(CMAKE_C_STANDARD 99)

find_package(SDL2 REQUIRED)

add_executable(pong main.c)
target_link_libraries(pong PRIVATE ${SDL2_LIBRARIES})
target_include_directories(pong PRIVATE ${SDL2_INCLUDE_DIRS})