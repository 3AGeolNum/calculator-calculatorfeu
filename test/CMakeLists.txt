message(STATUS "TEST DIR ${PROJECT_SOURCE_DIR}/src/include")

add_executable(test_Tree test_Tree.cpp)
target_include_directories(test_Tree PRIVATE "${PROJECT_SOURCE_DIR}/src/include")
add_test(NAME test_Tree COMMAND test_Tree)

add_executable(test_Process test_Process.cpp)
target_include_directories(test_Process PRIVATE "${PROJECT_SOURCE_DIR}/src/include")
add_test(NAME test_Process COMMAND test_Process)
