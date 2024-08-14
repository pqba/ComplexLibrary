#include "complex.h"

Complex sin(Complex x) {
  double first = sin(x.r) * cosh(x.i);
  double second = cos(x.r) * sinh(x.i);

  return Complex(first, second);
}