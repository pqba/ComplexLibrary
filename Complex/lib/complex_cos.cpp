#include "complex.h"

Complex cos(Complex x) {
  double first = cos(x.r) * cosh(x.i);
  double second = sin(x.r) * sinh(x.i);
  return Complex(first, second);
}