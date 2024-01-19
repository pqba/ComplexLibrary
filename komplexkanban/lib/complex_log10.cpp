#include "complex.h"
#include "../lib/complex_abs.cpp"
#include "../lib/complex_arg.cpp"
#include <cmath>

Complex log10(Complex x) {
  Complex y = Complex(log10(abs(x)),arg(x));
  return y;
}