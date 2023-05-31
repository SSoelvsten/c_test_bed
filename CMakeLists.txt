cmake_minimum_required(VERSION 3.12)

project (c_test_bed
  VERSION 1.0
  DESCRIPTION "C Test Bed: A CI-based testbed for C and C++ "
  HOMEPAGE_URL https://github.com/SSoelvsten/c_test_bed
)

# ============================================================================ #
# C
# ============================================================================ #
add_subdirectory(c)

# ============================================================================ #
# C++
# ============================================================================ #
# TODO: allow user to specify C++ version (11 or later)

enable_language(CXX)
add_subdirectory(cpp)

