cmake_minimum_required(VERSION 3.0.0)

project("Cpp Banter")

include("CMakeMacros.cmake")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Use C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions("/D_USE_MATH_DEFINES")

if (MSVC)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")

  add_definitions("/DNOMINMAX")

  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj")
endif(MSVC)

# Helpful directory variables to find sources and test data
set(EVOLUTION_ROOT ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(src)
