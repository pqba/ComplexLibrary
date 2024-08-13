cmake_minimum_required(VERSION 3.10)
project(ComplexLibrary)

# Find Catch2 library
find_package(Catch2 REQUIRED)

# Complex library
add_library(complex SHARED
    Complex/lib/complex.h
    Complex/lib/complex_abs.cpp
    # ... other complex library sources
)
target_include_directories(complex PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Complex/lib)


file(GLOB TEST_SRCS "tests/suite/*.cpp")
# Complex test executable
add_executable(complex_test
    Complex/src/main.cpp
    Complex/src/fac.cpp
    tests/catch_amalgamated.cpp
   # ${TEST_SRCS}
   tests/suite/complex_abs_test.cpp
   tests/suite/complex_addition_test.cpp
)
target_link_libraries(complex_test PRIVATE complex Catch2::Catch2)

# Add unit tests
enable_testing()

file(GLOB TEST_SOURCES "tests/*.cpp")
foreach(test_file ${TEST_SOURCES})
    get_filename_component(test_name ${test_file} NAME_WE)
    add_test(NAME ${test_name} COMMAND complex_test ${test_file})
endforeach()
