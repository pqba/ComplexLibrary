#include "complex.h"

Complex conj(Complex x) {
  return Complex(x.r, -x.i);
}