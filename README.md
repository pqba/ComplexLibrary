# ComplexLibrary

This project is a Complex Number library with an integrated test suite that uses Catch2. It can be included and builds with CMake to interop with applications which need to use complex numbers. 

### Prerequisites

```
C++ and C
CMake
Catch2 for optional tests
```

[C & C++](https://www.freecodecamp.org/news/how-to-install-c-and-cpp-compiler-on-windows/)
[Catch2](github.com/catchorg/Catch2) 
[CMake](https://cmake.org/)


### Installing

Clone the repository to your local machine using the following command:

```
git clone https://github.com/pqba/ComplexLibrary.git
```

If the libraries noted above are installed, simply build the project and develop your app alongside the library.

Example: 

```cpp
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


### Break down into end to end tests

The tests check to see if the mathematical functions work true to their descriptions, making sure the library is working as prescribed.

For example, the complex tangent function is tested to a random seed and specifications with a base known correct case to ensure proper functionality. This is what's outputted after running make and looking at this specific file.

```bash
clang++  ./tests/complex_tan_test.cpp ./tests/catch_amalgamated.o
./a.out
Randomness seeded to: 3420106309
===============================================================================
All tests passed (2 assertions in 1 test case)
```



## Deployment

Use your preferred build system (e.g., Makefile, CMake) to build your project with the integrated complex number library. Ensure it's linked correctly, and use the functions.


## Structure

This project holds the **`Complex/`** folder that houses the `lib` implementations, a `src` folder for a sample application. Additionally the **`tests/`** folder holds the Catch2 headers and `suite/` folders which hold the specific tests.

If you add a new executable, say `app/hello.cpp`, you only need to add the following two lines to [CMakeLists.txt](CMakeLists.txt):

```cmake
add_executable(Complex/src/main.cpp)   # Name of exec. and location of file.
target_link_libraries(main PRIVATE ${complex_test})  # Link the executable to lib built from src/*.cpp (if it uses it).
```

You can find the example source code that builds the `main` executable in [app/main.cpp](app/main.cpp) under the `Build` section in [CMakeLists.txt](CMakeLists.txt).
If the executable you made does not use the library in [src/](src), then only the first line is needed.



## Building

Build by making a build directory (i.e. `build/`), run `cmake` in that dir, and then use `make` to build the desired target if on Linux or MacOS.

On Windows, use an IDE plugin to automatically build.


```bash
mkdir build && cd build
cmake ..
make
./complex_test
```

## .gitignore

The [.gitignore](.gitignore) file is based on the [Github C++.gitignore file](https://github.com/github/gitignore/blob/master/C%2B%2B.gitignore)
## License

This project is licensed under the MIT License.

## Acknowledgments

Mathematical foundations for library were derived from [ProofWiki](https://proofwiki.org/wiki/Main_Page) and [Wikipedia](https://en.wikipedia.org/)
