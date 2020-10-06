cmake_minimum_required(VERSION 3.10)

# use the CMAKE_CXX_STANDARD variable
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# set the project name
project(FireCalculator VERSION 1.0)

#export configuration to source code
configure_file(cmake/FireCalculatorCMakeConfig.h.in FireCalculatorCMakeConfig.h)

include(CMakePackageConfigHelpers) # define the following command

configure_package_config_file(
	cmake/FireCalculatorCMakeConfig.cmake.in
	FireCalculatorCMakeConfig.cmake
	INSTALL_DESTINATION ${PROJECT_BINARY_DIR}
)

install(FILES ${PROJECT_BINARY_DIR}/FireCalculatorCMakeConfig.h DESTINATION ${PROJECT_BINARY_DIR}/install/include/)
# install export
install(FILES ${PROJECT_BINARY_DIR}/FireCalculatorCMakeConfig.cmake DESTINATION ${PROJECT_BINARY_DIR}/install/cmake/)

#about libraries
add_subdirectory(src)

# about executable
option(COMPILE_EXE "Compile executable" ON)

if(COMPILE_EXE)
	# add the executable (target)
	message(STATUS "Configuring FireCalculator with .exe")
	add_executable(calculator main/Calculator.cpp)
	target_link_libraries(calculator PRIVATE calculatorlib)
endif()

# about tests
option(COMPILE_TESTS "Compile tests" OFF)

if(COMPILE_TESTS)
	# Enable testings with CTest
	enable_testing()
	message(STATUS "Configuring FireCalculator with tests")
	add_subdirectory(test)
endif()
