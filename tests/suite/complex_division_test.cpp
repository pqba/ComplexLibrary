#define CATCH_CONFIG_MAIN
// Provides main() function

#include "../../Complex/lib/complex.h"
#include "../catch_amalgamated.hpp"


// Test Fixture (Setup)
TEST_CASE("DIVISION Test Case") {
    Complex obj(1.0,5.0); // Instantiate class under test
    Complex obj2(0.0,-3.0);
// Act (Execution)
Complex quotient = obj/obj2;
// Assert (Verification)
REQUIRE(quotient.r ==(5.0/3.0));
REQUIRE(quotient.i== (1.0/3.0));
}

