#define CATCH_CONFIG_MAIN
// Provides main() function

#include "../../Complex/lib/complex.h"
#include "../catch_amalgamated.hpp"

TEST_CASE("Example Test Case") {
  Complex obj(3.0,4.0);
  Complex test = conj(obj);
  double realnum = test.r;
  double imaginarynum = test.i;
  REQUIRE(realnum == 3.0);
  REQUIRE(imaginarynum == -4.0);
}
