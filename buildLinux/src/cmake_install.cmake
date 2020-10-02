# Install script for directory: /media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/install/lib/libcalculatorlib.a")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/install/lib" TYPE STATIC_LIBRARY FILES "/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/src/libcalculatorlib.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/install/include//")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/install/include/" TYPE DIRECTORY FILES "/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/src/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/install/cmake/calculatorlib_target.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/install/cmake/calculatorlib_target.cmake"
         "/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/src/CMakeFiles/Export/_media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/install/cmake/calculatorlib_target.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/install/cmake/calculatorlib_target-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/install/cmake/calculatorlib_target.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/install/cmake/calculatorlib_target.cmake")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/install/cmake" TYPE FILE FILES "/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/src/CMakeFiles/Export/_media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/install/cmake/calculatorlib_target.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
     "/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/install/cmake/calculatorlib_target-debug.cmake")
    if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
        message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
    if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
        message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
file(INSTALL DESTINATION "/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/install/cmake" TYPE FILE FILES "/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/src/CMakeFiles/Export/_media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/install/cmake/calculatorlib_target-debug.cmake")
  endif()
endif()

