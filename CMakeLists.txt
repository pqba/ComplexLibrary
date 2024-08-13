cmake_minimum_required(VERSION 3.10)

project(ComplexLibrary)

set(CMAKE_CXX_FLAGS "-g -std=c++14 -O0")

# Find Catch2 library
find_package(Catch2 REQUIRED)

# Glob all .cpp files in the Complex/lib directory
file(GLOB COMPLEX_SOURCES "Complex/lib/*.cpp")

# Define the complex library
add_library(complex SHARED
            Complex/lib/complex.h
            ${COMPLEX_SOURCES})

# Include directory for complex library headers
target_include_directories(complex PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Complex/lib)

# Glob all test source files
file(GLOB TEST_SRCS "tests/suite/*.cpp")

# Define the main executable
add_executable(complex_test
            Complex/src/main.cpp
            Complex/src/fac.cpp
            tests/catch_amalgamated.cpp
            ${TEST_SRCS}
            )

# Link the complex library and Catch2 library to the executable
target_link_libraries(complex_test PRIVATE complex Catch2::Catch2)

# Add include directories for tests
target_include_directories(complex_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Complex/lib)


