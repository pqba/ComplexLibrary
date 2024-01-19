#define CATCH_CONFIG_MAIN
// Provides main() function
 
#include "../lib/complex_plusequals.cpp"
#include "catch_amalgamated.hpp"
// Test Fixture (Setup)
TEST_CASE("Example Test Case") {
    Complex obj(1.0,3.0); // Instantiate class under test
    Complex obj2(4.0,2.0);
// Act (Execution)
  obj+= obj2;
double realnum = obj.r;
double imaginarynum = obj.i;
// Assert (Verification)
REQUIRE(realnum ==5.0);
REQUIRE(imaginarynum == 5.0);
}

