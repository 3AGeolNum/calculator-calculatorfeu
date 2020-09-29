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
|-- test
  |-- CMakeLists.txt
  |-- test_Tree.cpp
|-- .gitignore
|-- CMakeLists.txt
|-- README.md
```

## Compilation

### Linux (ubuntu) and Windows 10 (64 bits)

```cmake -E make_directory build 
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release -DCOMPILE_EXE=[ON|OFF] -DCOMPILE_TESTS=[ON|OFF]
cmake --build . --config Release```

To run tests
```ctest -C Release```
