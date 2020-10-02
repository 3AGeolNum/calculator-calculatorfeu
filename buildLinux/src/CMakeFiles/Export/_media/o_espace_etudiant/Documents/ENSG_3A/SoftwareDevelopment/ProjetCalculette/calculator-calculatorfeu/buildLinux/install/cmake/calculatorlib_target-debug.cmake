#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "calculatorlib" for configuration "Debug"
set_property(TARGET calculatorlib APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(calculatorlib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/install/lib/libcalculatorlib.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS calculatorlib )
list(APPEND _IMPORT_CHECK_FILES_FOR_calculatorlib "/media/o_espace_etudiant/Documents/ENSG_3A/SoftwareDevelopment/ProjetCalculette/calculator-calculatorfeu/buildLinux/install/lib/libcalculatorlib.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
