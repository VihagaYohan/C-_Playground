cmake_minimum_required(VERSION 3.30)
project(C__Playground)

set(CMAKE_CXX_STANDARD 20)

add_executable(C__Playground main.cpp
        basics/1_variable.cpp
        basics/2_mathematical_operations.cpp
        basics/3_order_operations.cpp
        basics/4_writing_output.cpp
        basics/5_reading_input.cpp
        basics/6_working_with_standard_library.cpp
)
