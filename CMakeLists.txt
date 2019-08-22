cmake_minimum_required(VERSION 3.14)
project(chapter13)

set(CMAKE_CXX_STANDARD 14)

add_executable(chapter13 main.cpp)
add_executable(tabtenn1 tabtenn1.cpp tabtenn1.h usett1.cpp)
add_executable(brass brass.cpp brass.h usebrass1.cpp)

add_executable(test test.cpp test.h test_test.cpp brass.cpp brass.h)