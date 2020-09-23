cmake_minimum_required(Version 3.10)


# use the CMAKE_CXX_STANDARD variable
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# set the project name
project(FireCalculator VERSION 1.0)

# add the executable (target)
add_executable(main/Calculator.cpp)
