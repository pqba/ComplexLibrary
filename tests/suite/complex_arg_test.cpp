#define CATCH_CONFIG_MAIN
// Provides main() function

#include "../../Complex/lib/complex.h"
#include "../catch_amalgamated.hpp"

TEST_CASE("ARG Test Case") {
    Complex obj(5.0,0.0); 
double a = arg(obj);

REQUIRE(a == Catch::Approx(PI/2).margin(0.001));
}