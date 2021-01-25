cmake_minimum_required(VERSION 3.17)
project(HW0)

set(CMAKE_CXX_STANDARD 14)

add_executable(hello_world main.cpp say_hello.h)
add_executable(hello_test hello_tests.cpp say_hello.h)
