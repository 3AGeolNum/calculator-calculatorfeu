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

add_executable(test_remove_space test_remove_space.cpp)
target_link_libraries(test_remove_space PUBLIC calculatorlib)
add_test(NAME test_remove_space COMMAND test_remove_space)

add_executable(test_is_input_empty test_is_input_empty.cpp)
target_link_libraries(test_is_input_empty PUBLIC calculatorlib)
add_test(NAME test_is_input_empty COMMAND test_is_input_empty)

add_executable(test_start_with_operator test_start_with_operator.cpp)
target_link_libraries(test_start_with_operator PUBLIC calculatorlib)
add_test(NAME test_start_with_operator COMMAND test_start_with_operator)

add_executable(test_end_with_operator test_end_with_operator.cpp)
target_link_libraries(test_end_with_operator PUBLIC calculatorlib)
add_test(NAME test_end_with_operator COMMAND test_end_with_operator)

add_executable(test_validity_characters test_validity_characters.cpp)
target_link_libraries(test_validity_characters PUBLIC calculatorlib)
add_test(NAME test_validity_characters COMMAND test_validity_characters)