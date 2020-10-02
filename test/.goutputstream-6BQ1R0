cmake_minimum_required(VERSION 3.10)

if(NOT TARGET calculatorlib)
	project(FireCalculatorCMake VERSION 1.0)
	find_package(FireCalculatorCMake REQUIRED CONFIG)
	enable_testing()
endif()

add_executable(test_Tree test_Tree.cpp)
target_link_libraries(test_Tree PUBLIC calculatorlib)
add_test(NAME test_Tree COMMAND test_Tree)

add_executable(test_Process test_Process.cpp)
target_link_libraries(test_Process PUBLIC calculatorlib)
add_test(NAME test_Process COMMAND test_Process)
