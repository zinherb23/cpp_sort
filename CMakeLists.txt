cmake_minimum_required(VERSION 3.10)

project(my_cpp_project_3)

set(CMAKE_CXX_STANDARD 17)

# Specify the directories
include_directories(include)
file(GLOB SOURCES "src/*.cpp")

# Create an executable
add_executable(my_cpp_project_3 ${SOURCES})

set(CMAKE_BUILD_TYPE Debug)  # Forces Debug mode


