#define CATCH_CONFIG_MAIN
// Provides main() function
#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536
 
#include <cmath>

#include "../lib/complex_polar.cpp"
#include "catch_amalgamated.hpp"
// Test Fixture (Setup)
TEST_CASE("Example Test Case") {
    Complex obj = polar(5.0, PI/4);
// Act (Execution)
double realnum = obj.r;
double imaginarynum = obj.i;
// Assert (Verification)
REQUIRE(realnum == Catch::Approx(5.0*sqrt(2.0)/2.0).margin(0.000001));
REQUIRE(imaginarynum == Catch::Approx(5.0*sqrt(2.0)/2.0).margin(0.000001));
}

