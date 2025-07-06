#define CATCH_CONFIG_MAIN
// Provides main() function

#include "../../Complex/lib/complex.h"
#include "../catch_amalgamated.hpp"

TEST_CASE("COS Test Case") {
  Complex obj = Complex(0,0);
  Complex test = cos(obj);
  REQUIRE(test.r == Catch::Approx(1.0).margin(0.000001));
  REQUIRE(test.i == Catch::Approx(0.0).margin(0.000001));
}
