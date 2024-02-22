# Complete the CMake buid files
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(KomplexKanbanV3-Team12)

# Add the executable
add_executable(MyProgram main.cpp)

# Assuming all your source files are in the src directory
file( GLOB-SOURCES "src/*.pp")

# Add library
add_library(MyLibrary STATIC $(SOURCES})

# Include directories for the library
target_include_directories(MyLibrary PUBLIC include))

# Link the executable with the library
target_link_libraries(MyProgram PRIVATE MyLibrary)
