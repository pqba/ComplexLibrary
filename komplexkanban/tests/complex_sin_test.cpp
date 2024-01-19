#define CATCH_CONFIG_MAIN
// Provides main() function

#include "../lib/complex_sin.cpp"
#include "catch_amalgamated.hpp"

TEST_CASE("Example Test Case") {
  Complex obj = log(Complex(1,1));
  Complex test = sin(obj);
  REQUIRE(test.r == Catch::Approx(0.0).margin(0.000001));
  REQUIRE(test.i == Catch::Approx(0.0).margin(0.000001);
}