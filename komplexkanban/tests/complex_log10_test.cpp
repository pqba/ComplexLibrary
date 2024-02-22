#define CATCH_CONFIG_MAIN
// Provides main() function

#include "../lib/complex_log10.cpp"
#include "../lib/complex_abs.cpp"
#include "../lib/complex_arg.cpp"
#include "catch_amalgamated.hpp"
#include <cmath>

TEST_CASE("Example Test Case") {
  Complex obj(3.0, 4.0);
  Complex test = log10(obj);
  REQUIRE(test.r == Catch::Approx(log10(abs(obj))).margin(0.000001));
  REQUIRE(test.i == Catch::Approx(arg(obj)).margin(0.000001));
}