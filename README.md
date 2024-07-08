# Complex Library
A library to handle complex numbers, arithmetic tasks, input and output, and advanced mathematical tasks. 

## Getting Started

To get a copy of the project up and running on your local machine for development and testing purposes download the Git Repository, ensure you have relevant libraries and languages installed and  see deployment and prerequisites for notes on how to deploy the project on a live system.


### Prerequisites

What things you need to install the software and how to install them

```
C++ and C
CMake
Catch2 for optional tests
```

[C & C++](https://www.freecodecamp.org/news/how-to-install-c-and-cpp-compiler-on-windows/)
[Catch2](github.com/catchorg/Catch2) 
[CMake](https://cmake.org/)


### Installing

A step by step series of examples that tell you how to get a development env running

Clone the repository to your local machine using the following command:

```
git clone https://github.com/pqba/ComplexLibrary
```

Navigate to the project directory using shell:

```
cd ComplexLibrary
```

Create a build directory and run using a compiler:

```
g++ -o complex_library Complex.cpp -std=c++11
```
Include the header file in your code 

```
#include "Complex.h"
```

Link the library 

```
g++ -o your_program your_program.cpp -std=c++11 -L/path/to/complex-library -lcomplex_library
```

Now that the library is built, you can use it in your C++ or C projects.

Example: 

```
#include "Complex.h"
#include <iostream>

int main() {
    // Create complex numbers
    Complex a(2.0, 3.0);
    Complex b(1.0, -2.0);

    // Perform operations
    Complex sum = a + b;
    Complex product = a * b;

    // Display results
    std::cout << "Sum: " << sum.real << " + " << sum.imag << "i" << std::endl;
    std::cout << "Product: " << product.real << " + " << product.imag << "i" << std::endl;

    return 0;
}
```


## Running the tests

To run the tests, simply have all of the correct libraries (Catch2) installed and the MakeFile should be configured correctly to run it. Simply type 

```
make
```
into the shell to see test cases.

### Break down into end to end tests

The tests check to see if the mathematical functions work true to their descriptions, making sure the library is working as prescribed.

For example, the complex tangent function is tested to a random seed and specifications with a base known correct case to ensure proper functionality. This is what's outputted after running make and looking at this specific file.

```
clang++  ./tests/complex_tan_test.cpp ./tests/catch_amalgamated.o
./a.out
Randomness seeded to: 3420106309
===============================================================================
All tests passed (2 assertions in 1 test case)
```



## Deployment

Use your preferred build system (e.g., Makefile, CMake) to build your project with the integrated complex number library. Ensure it is linked correctly. 

Deploy executable to your live system, and ensure the functions or use cases match with the specific functionalities implemented in the library. 

## Built With

* [GNU Tools](https://www.gnu.org/software/gcc/) - GNU compiler tools
* [Replit](https://replit.com/) - Replit Development Environment
* [Git and GitHub](https://github.com/) - Version Control and Collaboration
* [Trello](https://trello.com/) - Team Management for Agile Development Strategy



Sources go in [src/](src/), header files in [include/](include/), main programs in [app/](app), and
tests go in [tests/](tests/) (compiled to `unit_tests` by default).

If you add a new executable, say `app/hello.cpp`, you only need to add the following two lines to [CMakeLists.txt](CMakeLists.txt):

```cmake
add_executable(Complex/src/main.cpp)   # Name of exec. and location of file.
target_link_libraries(main PRIVATE ${ComplexLibrary})  # Link the executable to lib built from src/*.cpp (if it uses it).
```

You can find the example source code that builds the `main` executable in [app/main.cpp](app/main.cpp) under the `Build` section in [CMakeLists.txt](CMakeLists.txt).
If the executable you made does not use the library in [src/](src), then only the first line is needed.



## Building

Build by making a build directory (i.e. `build/`), run `cmake` in that dir, and then use `make` to build the desired target.

Example:

```bash
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=[Debug | Coverage | Release]
make
./main
make test      # Makes and runs the tests.
make coverage  # Generate a coverage report.
make doc       # Generate html documentation.
```

## .gitignore

The [.gitignore](.gitignore) file is a copy of the [Github C++.gitignore file](https://github.com/github/gitignore/blob/master/C%2B%2B.gitignore),
with the addition of ignoring the build directory (`build/`).



## License

This project is licensed under the MIT License.
## Acknowledgments

Mathematical foundations for library were derived from [ProofWiki](https://proofwiki.org/wiki/Main_Page) and [Wikipedia](https://en.wikipedia.org/)

