# ComplexLibrary

This project is a Complex Number library with an integrated test suite that uses Catch2. It can be included and builds with CMake to interop with applications which  use complex numbers. 

### Dependencies

- [C & C++](https://www.freecodecamp.org/news/how-to-install-c-and-cpp-compiler-on-windows/)

- [Catch2](github.com/catchorg/Catch2) 

- [CMake](https://cmake.org/)


### Installing

Clone the repository to your local machine using the following command:

```
git clone https://github.com/pqba/ComplexLibrary.git
```

If the libraries noted above are installed, simply build the project and develop your app alongside the library.

Example: 

```cpp
#include "complex.h"
#include <iostream>

int main() {
    // Create complex numbers
    Complex a(2.0, 3.0);
    Complex b(1.0, -2.0);

    // Perform operations
    Complex sum = a + b;
    Complex product = a * b;
    Complex sample = log(sum) * tan(product); 

    // Display results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Sample: " << sample << std::endl;
    return 0;
}
```


### Tests

The tests check to see if the mathematical functions work true to their descriptions, making sure the library is working as prescribed.

**Sample**
```cpp
#define CATCH_CONFIG_MAIN
#include "libfolder/complex.h"
#include "catchfolder/catch_amalgamated.hpp"

TEST_CASE("Sin() Test Case") {
  Complex obj(8,6);
  Complex test = sin(obj);
  REQUIRE(test.r == Catch::Approx(199.569).margin(0.0001));
  REQUIRE(test.i == Catch::Approx(-29.349).margin(0.0001));
}
```

## Structure

This project holds the **`Complex/`** folder that houses the `lib` implementations, a `src/` folder for a sample application. Additionally the **`tests/`** folder holds the Catch2 headers and `suite/` folders which hold the specific tests.

If you add a new executable, say `src/hello.cpp`, you only need to add the following few lines to [CMakeLists.txt](CMakeLists.txt):

```cmake
add_executable(complex_app
    Complex/src/hello.cpp)

target_link_libraries(complex_app PRIVATE complex)

target_include_directories(complex_app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Complex/lib)
```
The [CMakeLists.txt](CMakeLists.txt) builds a sample `complex_main` executable. The example under `src/` uses the library as well as non-library specific functionality.


## Building

Use your preferred build system (e.g., Makefile, CMake) to build your project with the integrated complex number library.

Linux & Mac
```bash
mkdir build && cd build
cmake ..
make
./[complex_test | complex_main] 
```

On Windows, use an IDE plugin or the powershell to make the library. You may need to install [ninja](https://ninja-build.org/) for builds.

## License

This project is licensed under the MIT License.

## Acknowledgments

Mathematical foundations for library were derived from [ProofWiki](https://proofwiki.org/wiki/Main_Page) and [Wikipedia](https://en.wikipedia.org/). The [.gitignore](.gitignore) file is based on the [Github C++.gitignore file](https://github.com/github/gitignore/blob/master/C%2B%2B.gitignore)