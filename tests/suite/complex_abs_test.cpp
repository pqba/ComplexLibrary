#define CATCH_CONFIG_MAIN
// Provides main() function
#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

#include "../../Complex/lib/complex.h"
#include "../catch_amalgamated.hpp"

int X = 2;
// Test Fixture (Setup)
TEST_CASE("ABS Test Case") {
    Complex obj(3.0,4.0);
// Act (Execution) 

double magnitude = abs(obj);
// Assert (Verification)
REQUIRE(magnitude == 5.0);

}

