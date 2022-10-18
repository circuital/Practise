cmake_minimum_required(VERSION 3.22)
project(pointers_references)

set(CMAKE_CXX_STANDARD 17)

add_executable(pointer_reference pointers_references.cpp)
add_executable(unique_pointer unique_pointer.cpp)
add_executable(shared_pointer shared_pointer.cpp)
add_executable(weak_pointer weak_pointer.cpp)
