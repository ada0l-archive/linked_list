cmake_minimum_required(VERSION 3.17)
project(linked_list C)

set(CMAKE_C_STANDARD 11)

add_executable(linked_list linked_list.c tests.c)