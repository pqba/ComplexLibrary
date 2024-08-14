#include "complex.h"

Complex log(Complex x) {
    return Complex(std::log(abs(x)), arg(x));
}