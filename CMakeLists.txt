cmake_minimum_required(VERSION 3.10)

# use the CMAKE_CXX_STANDARD variable
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# set the project name
project(FireCalculator VERSION 1.0)

# about include




# about executable
option(COMPILE_EXE "Compile executable" OFF)

if(COMPILE_EXE)
	# add the executable (target)
	message(STATUS "Configuring FireCalculator with .exe")	
	add_executable(calculator main/Calculator.cpp)
	target_include_directories(calculator PRIVATE "${PROJECT_SOURCE_DIR}/src/include" "${PROJECT_BINARY_DIR}")
endif()

# about tests
option(COMPILE_TESTS "Compile tests" OFF)

if(COMPILE_TESTS)
	# Enable testings with CTest
	enable_testing()
	message(STATUS "Configuring FireCalculator with tests")
	add_subdirectory(test)
endif()

