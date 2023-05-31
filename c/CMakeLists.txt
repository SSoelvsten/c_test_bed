add_executable(c_test test_bed.c)

set_target_properties(c_test PROPERTIES
  # Language settings
  LINKER_LANGUAGE C
  CMAKE_C_LINK_EXECUTABLE default
  C_STANDARD 17
  C_STANDARD_REQUIRED ON

  # Visual Studio
  FOLDER ${PROJECT_NAME}

  # Project Information
  VERSION ${PROJECT_VERSION}
)
