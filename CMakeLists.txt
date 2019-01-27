cmake_minimum_required(VERSION 3.13)
project(Algorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(Algorithms main.cpp headers/linkedlist.h src/linkedlist.cpp headers/generic.h headers/sorting.h src/sorting.cpp src/generic.cpp headers/array.h src/array.cpp headers/trees.h src/trees.cpp)