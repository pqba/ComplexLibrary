#include <iostream>
#include "../lib/complex.h"
#include "fac.h"

int main(void) {
    std::cout << "Hello Complex Example" << std::endl;

    std::cout << "Factorial test " << Factorial(5) << std::endl;

    Complex a(4.0,6.0);
    Complex b(5.0,-3.0);
    std::cout << "Multiplied: " << a * b << "\n";
    return 0;
}