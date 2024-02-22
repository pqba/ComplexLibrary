#define CATCH_CONFIG_MAIN
// Provides main() function

#include "../lib/complex_arg.cpp"
#include "catch_amalgamated.hpp"
// Test Fixture (Setup)
TEST_CASE("Example Test Case") {
    Complex obj(1.0,5.0); // Instantiate class under test
// Act (Execution)
double a = arg(obj);
// Assert (Verification)

REQUIRE(a== 5.0);
}