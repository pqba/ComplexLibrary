#include "complex.h"
#include "complex_abs.h"
#include "complex_arg.h"
Complex log(Complex x) {
    return Complex(std::log(abs(x)), arg(x));
}