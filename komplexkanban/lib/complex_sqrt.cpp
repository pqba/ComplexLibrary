#include "complex.h"
#include "complex_abs.cpp"
#include <cmath>

Complex sqrt(Complex val){

  Complex x = Complex(sqrt((abs(val)+val.r)/2), (val.i/std::abs(val.i)*sqrt((abs(val)-val.r)/2)));

  return x;

};
