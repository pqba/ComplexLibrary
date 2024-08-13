#define CATCH_CONFIG_MAIN
// Provides main() function
#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

#include "../../Complex/lib/complex.h"
#include "../catch_amalgamated.hpp"
// Test Fixture (Setup)
TEST_CASE("POW Test Case") {
    Complex obj(5,12);
// Act (Execution)
Complex power(pow(5,1),pow(12,1));
double realnum = power.r;
double imaginarynum = power.i;
// Assert (Verification)
REQUIRE(realnum ==5.0);
REQUIRE(imaginarynum == 12.0);
}
