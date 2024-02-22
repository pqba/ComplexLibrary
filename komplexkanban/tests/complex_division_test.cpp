#define CATCH_CONFIG_MAIN
// Provides main() function

#include "../lib/complex_division.cpp"
#include "catch_amalgamated.hpp"
// Test Fixture (Setup)
TEST_CASE("Example Test Case") {
    Complex obj(1.0,5.0); // Instantiate class under test
    Complex obj2(0.0,-3.0);
// Act (Execution)
Complex quotient = obj/obj2;
// Assert (Verification)
REQUIRE(quotient.r ==(5.0/3.0));
REQUIRE(quotient.i== (1.0/3.0));
}

