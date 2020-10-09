# Fire Calculator

Better than Water Calculator

## Project Architecture

```
|-- /.github
   |-- /workflows
     |-- cmake.yml
|-- /cmake
   |-- FireCalculatorCMakeConfig.cmake.in
   |-- FireCalculatorCMakeConfig.h.in
|-- /doc
  |-- EnonceProjetCalculette.pdf
  |-- gamerule.md
|-- /main
  |-- Calculator.cpp
|-- /src
  |-- /include
    |-- Input.h
    |-- Process.h
    |-- Tree.h
  |-- CMakeLists.txt
  |-- Input.cpp
  |-- Process.cpp
  |-- Tree.cpp
|-- /test
  |-- CMakeLists.txt
  |-- test_Process.cpp
  |-- test_Tree.cpp
  |-- test_add_zero_after_point.cpp
  |-- test_add_zero_before_point.cpp
  |-- test_end_with_operator.cpp
  |-- test_is_input_empty.cpp
  |-- test_remove_followin_underscore.cpp
  |-- test_remove_non_operator_minus.cpp
  |-- test_remove_space.cpp
  |-- test_remove_two_minus_beginning.cpp
  |-- test_replace_comma.cpp
  |-- test_start_with_operator.cpp
  |-- test_transform_divide.cpp
  |-- test_transform_minus.cpp
  |-- test_two_dots_before_operator.cpp
  |-- test_two_successive_operator.cpp
  |-- test_validity_characters.cpp
|-- .clang-format
|-- .gitignore
|-- CMakeLists.txt
|-- README.md
```

## Compilation

### Linux (ubuntu) and Windows 10 (64 bits)

```
cmake -E make_directory build 
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release -DCOMPILE_EXE=[ON|OFF] -DCOMPILE_TESTS=[ON|OFF]
cmake --build . --config Release
```

To run tests
```ctest -C Release```
