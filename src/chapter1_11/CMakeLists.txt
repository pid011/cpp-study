# CMakeList.txt : CMake project for chapter1_11, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("chapter1_11")

# Add source to this project's executable.
add_executable (chapter1_11 main.cpp "include/add.hpp" "add.cpp")

# TODO: Add tests and install targets if needed.
