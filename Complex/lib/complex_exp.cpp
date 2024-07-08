#include "complex.h"
#include <cmath>

Complex exp(Complex val){

  Complex x = Complex(exp(val.r)*cos(val.i), exp(val.r)*sin(val.i));
  return x;
  
};