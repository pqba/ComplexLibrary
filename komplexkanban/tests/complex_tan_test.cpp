#define CATCH_CONFIG_MAIN
// Provides main() function

#include "../lib/complex_tan.cpp"
#include "catch_amalgamated.hpp"
#include <cmath>

TEST_CASE("Example Test Case") {
  Complex obj(3.0, 4.0);
  Complex test = tan(obj);
  REQUIRE(test.r == Catch::Approx((tan(obj.r)- (tan(obj.r)*tanh(obj.i)*tanh(obj.i)))/ (1+(tan(obj.r)*tan(obj.r)*tanh(obj.i)*tanh(obj.i)))).margin(0.000001));
  REQUIRE(test.i == Catch::Approx((tanh(obj.i)+ (tan(obj.r)*tan(obj.r)*tanh(obj.i)))/ (1+(tan(obj.r)*tan(obj.r)*tanh(obj.i)*tanh(obj.i)))).margin(0.000001));
}