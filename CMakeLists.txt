cmake_minimum_required(VERSION 3.8)
project(StableMarriage)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Person.cpp Woman.cpp Man.cpp Person.h Man.h Woman.h)
add_executable(StableMarriage ${SOURCE_FILES})