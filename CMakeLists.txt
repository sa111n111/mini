cmake_minimum_required(VERSION 3.21)
project(mini)

set(CMAKE_CXX_STANDARD 17)

add_executable(miniphp main.cpp vm.cpp vm.h)
