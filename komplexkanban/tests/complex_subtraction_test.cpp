#define CATCH_CONFIG_MAIN
// Provides main() function

#include "../lib/complex_subtraction.cpp"
#include "catch_amalgamated.hpp"
// Test Fixture (Setup)
TEST_CASE("Example Test Case") {
    Complex obj(1.0,3.0); // Instantiate class under test
    Complex obj2(4.0,2.0);
// Act (Execution)
double realnum = (obj-obj2).r;
double imaginarynum = (obj-obj2).i;
// Assert (Verification)
REQUIRE(realnum == -3.0);
REQUIRE(imaginarynum == 1.0);
}

