set(target_name calculatorlib)

# STATIC OR SHARED

add_library(${target_name} STATIC "")

target_sources(${target_name}
  PRIVATE
    "${PROJECT_SOURCE_DIR}/src/Input.cpp"
    "${PROJECT_SOURCE_DIR}/src/Process.cpp"
    "${PROJECT_SOURCE_DIR}/src/Tree.cpp"
  PRIVATE
    "${PROJECT_SOURCE_DIR}/src/include/Input.h"
    "${PROJECT_SOURCE_DIR}/src/include/Process.h"
    "${PROJECT_SOURCE_DIR}/src/include/Tree.h"
)

target_include_directories(${target_name}
  PUBLIC
     $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src/include>
     $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}>
	 $<INSTALL_INTERFACE:include>
)

export(TARGETS ${target_name} FILE ${PROJECT_BINARY_DIR}/${target_name}_target.cmake)

# install target
install(TARGETS ${target_name} EXPORT ${target_name} DESTINATION ${PROJECT_BINARY_DIR}/install/lib)
# install includes
install(DIRECTORY ${PROJECT_SOURCE_DIR}/src/include/ DESTINATION ${PROJECT_BINARY_DIR}/install/include/)

# install & export .cmake
install(EXPORT ${target_name} FILE ${target_name}_target.cmake DESTINATION ${PROJECT_BINARY_DIR}/install/cmake)
