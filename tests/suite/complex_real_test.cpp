#define CATCH_CONFIG_MAIN
// Provides main() function

#include "../../Complex/lib/complex.h"
#include "../catch_amalgamated.hpp"
// Test Fixture (Setup)
TEST_CASE("REAL Test Case") {
    Complex obj(1.0,5.0); // Instantiate class under test
// Act (Execution)
double realnum = real(obj);
// Assert (Verification)

REQUIRE(realnum == 1.0);
}