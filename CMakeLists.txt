cmake_minimum_required(VERSION 3.14)
project(chapter13)

set(CMAKE_CXX_STANDARD 14)

add_executable(chapter13 main.cpp)
add_executable(tabtenn1 tabtenn1.cpp tabtenn1.h usett1.cpp)
add_executable(brass brass.cpp brass.h usebrass1.cpp)
add_executable(abc acctabc.cpp acctabc.h usebrass3.cpp)

add_executable(test test.cpp test.h test_test.cpp brass.cpp brass.h)

add_executable(p1 pp/p1/Cd.cpp pp/p1/cd.cpp pp/p1/cd.h pp/p1/use.cpp)
add_executable(p2 pp/p2/cd.cpp pp/p2/cd.h pp/p2/use.cpp)
add_executable(p3 pp/p3/dma.cpp pp/p3/dma.h pp/p3/usedma.cpp)
add_executable(p4 pp/p4/port.cpp pp/p4/port.h pp/p4/useport.cpp)