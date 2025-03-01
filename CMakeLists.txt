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
        data_types/1_initialize_variable.cpp
        data_types/2_working_with_numbers.cpp
        data_types/3_narrowing.cpp
        data_types/4_random_numbers.cpp
        data_types/5_formatting_output.cpp
        data_types/6_data_types_and_limits.cpp
        data_types/7_working_with_boolean.cpp
        data_types/8_working_with_strings.cpp
        data_types/9_working_with_arrays.cpp
        data_types/10_type_conversion.cpp
        decision_making/1_comparison_operators.cpp
        decision_making/2_logical_operators.cpp
        decision_making/3_order_of_logical_operators.cpp
        decision_making/4_if_statement.cpp
        decision_making/5_nested_if_statement.cpp
        decision_making/6_conditional_statement.cpp
        decision_making/7_switch_statement.cpp
)
