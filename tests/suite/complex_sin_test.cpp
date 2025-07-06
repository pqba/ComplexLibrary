#define CATCH_CONFIG_MAIN
// Provides main() function

#include "../../Complex/lib/complex.h"
#include "../catch_amalgamated.hpp"

TEST_CASE("SIN Test Case") {
  Complex obj(7,2);
  Complex test = sin(obj);
  REQUIRE(test.r == Catch::Approx(2.471).margin(0.001));
  REQUIRE(test.i == Catch::Approx(2.734).margin(0.001));
}
