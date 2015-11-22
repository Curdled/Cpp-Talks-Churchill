cmake_minimum_required(VERSION 3.3)
project(source)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES
        shared_ptr.h
        auto.cpp
        auto2.cpp unique_ptr.h main.cpp)

add_executable(source ${SOURCE_FILES})