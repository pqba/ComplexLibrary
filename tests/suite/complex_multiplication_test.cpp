
#define CATCH_CONFIG_MAIN
// Provides main() function

#include "../../Complex/lib/complex_multiplication.cpp"
#include "../catch_amalgamated.hpp"
// Test Fixture (Setup)
TEST_CASE("MULTIPLICATION Test Case") {
    Complex obj(6.0,3.0); // Instantiate class under test
    Complex obj2(2.0,5.0);
// Act (Execution)
Complex product = obj*obj2;
// Assert (Verification)
REQUIRE(product.r ==-3.0);
REQUIRE(product.i== 36.0);
}

