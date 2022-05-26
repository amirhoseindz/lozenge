cmake_minimum_required(VERSION 3.17)
project(make_a_loZenge)

set(CMAKE_CXX_STANDARD 20)

add_executable(make_a_loZenge test/main.cpp lib/Lozenge.cpp include/Lozenge.h)