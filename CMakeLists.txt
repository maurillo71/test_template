cmake_minimum_required(VERSION 2.6)
project(test_template)

add_executable(test_template main.cpp)

install(TARGETS test_template RUNTIME DESTINATION bin)
