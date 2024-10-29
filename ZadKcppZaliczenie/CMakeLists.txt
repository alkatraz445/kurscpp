# Sprawdzane na CMake 3.30.5 oraz C++ 23

cmake_minimum_required(VERSION 3.10)

project(ZadClassKcpp)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(ZadClassKcpp/include)

add_executable(ZadClassKcpp ZadClassKcpp/main.cc ZadClassKcpp/src/ZadKcpp.cc)