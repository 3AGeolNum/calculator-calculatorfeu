add_executable(test_Tree test_Tree.cpp ../src/Tree.cpp)
message(STATUS "TEST DIR ${PROJECT_SOURCE_DIR}/src/include")
target_include_directories(test_Tree PRIVATE "${PROJECT_SOURCE_DIR}/src/include")
add_test(NAME test_Tree COMMAND test_Tree)

