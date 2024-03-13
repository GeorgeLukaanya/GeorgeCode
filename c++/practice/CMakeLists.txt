cmake_minimum_required(VERSION 3.26)
project(c__)

set(CMAKE_CXX_STANDARD 17)

add_executable(c__ main.cpp
        shape.cpp
        ../c/kato.c
        strings.cpp)
