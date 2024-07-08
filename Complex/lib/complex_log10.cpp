#include "complex.h"
#include <cmath>
#include "complex_abs.h"
#include "complex_arg.h"
Complex log10(Complex x) {
    return Complex(std::log10(abs(x)), arg(x) / std::log(10));
}