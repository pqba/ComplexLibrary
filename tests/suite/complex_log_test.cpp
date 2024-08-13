#define CATCH_CONFIG_MAIN
// Provides main() function


#include "../catch_amalgamated.hpp"
#include "../../Complex/lib/complex.h"

TEST_CASE("LOG Test Case") {
  Complex obj(3.0, 4.0);
  Complex test = log(obj);
  REQUIRE(test.r == Catch::Approx(log(abs(obj))).margin(0.000001));
  REQUIRE(test.i == Catch::Approx(arg(obj)).margin(0.000001));
}