add_executable(test_Tree test_Tree.cpp)
target_link_libraries(test_Tree PRIVATE "${PROJECT_SOURCE_DIR}/src/include")
add_test(NAME test_Tree COMMAND test_Tree)

