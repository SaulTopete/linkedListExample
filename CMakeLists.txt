cmake_minimum_required(VERSION 3.17)
project(linkedListExample)

set(CMAKE_CXX_STANDARD 14)

add_executable(linkedListExample main.cpp LinkedList.cpp LinkedList.h Node.h)