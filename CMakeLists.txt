cmake_minimum_required(VERSION 3.10)

project(ComplexLibrary)

# Find Catch2 library (assuming it's installed with brew)
find_package(Catch2 REQUIRED)

# Glob all .cpp files in the Complex/lib directory
file(GLOB COMPLEX_SOURCES "Complex/lib/*.cpp")

# Define the complex library
add_library(complex SHARED
            Complex/lib/complex.h
            ${COMPLEX_SOURCES})

# Include directory for complex library headers
target_include_directories(complex PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Complex/lib)

# Define the main executable
add_executable(complex_test
            Complex/src/main.cpp
            Complex/src/fac.cpp
            tests/catch_amalgamated.cpp)

# Link the complex library and Catch2 library to the executable
target_link_libraries(complex_test PRIVATE complex Catch2::Catch2)

# Add unit tests
enable_testing()

file(GLOB TEST_SOURCES "Complex/tests/*.cpp")
foreach(test_file ${TEST_SOURCES})
    get_filename_component(test_name ${test_file} NAME_WE)
    add_test(NAME ${test_name} COMMAND complex_test ${test_file})
endforeach()
