#include <cmath>
#include "../lib/complex_abs.cpp"
#include "../lib/complex_arg.cpp"
#include "complex.h"


Complex log(Complex x) {
  
  Complex y = Complex(log(abs(x)),arg(x));
  return y;
  
}