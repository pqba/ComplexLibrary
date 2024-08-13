#define CATCH_CONFIG_MAIN
// Provides main() function
#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

#include "../../Complex/lib/complex.h"
#include "../catch_amalgamated.hpp"

// Test Fixture (Setup)
TEST_CASE("EXP Test Case") {
  Complex obj(PI,PI); // Instantiate class under test
// Act (Execution) 
  double realnum = exp(obj).r;
  double imaginarynum = exp(obj).i;
// Assert (Verification)
REQUIRE(realnum == Catch::Approx(-exp(PI)).margin(0.000001));
REQUIRE(imaginarynum == Catch::Approx(0.0).margin(0.000001));
  

}

