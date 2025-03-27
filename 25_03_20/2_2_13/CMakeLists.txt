cmake_minimum_required(VERSION 3.30)
project(2_2_13 C)

set(CMAKE_C_STANDARD 11)

add_executable(2_2_13 main.c)

target_link_libraries(2_2_13 m)
