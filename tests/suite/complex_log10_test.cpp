#define CATCH_CONFIG_MAIN
// Provides main() function

#include "../../Complex/lib/complex.h"
#include "../catch_amalgamated.hpp"

TEST_CASE("LOG10 Test Case") {
  Complex obj(3.0, 4.0);
  Complex test = log10(obj);
  REQUIRE(test.r == Catch::Approx(log10(abs(obj))).margin(0.000001));
  REQUIRE(test.i == Catch::Approx(arg(obj) / std::log(10)).margin(0.000001));
}