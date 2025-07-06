#define CATCH_CONFIG_MAIN
// Provides main() function
#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

#include "../../Complex/lib/complex.h"
#include "../catch_amalgamated.hpp"
// Test Fixture (Setup)
TEST_CASE("SQRT Test Case") {
    Complex obj(5,12);
// Act (Execution)
Complex squaroot = sqrt(obj);
double realnum = squaroot.r;
double imaginarynum = squaroot.i;
// Assert (Verification)
REQUIRE(realnum == Catch::Approx(3.0).margin(0.000001));
REQUIRE(imaginarynum == Catch::Approx(2.0).margin(0.000001));
}

