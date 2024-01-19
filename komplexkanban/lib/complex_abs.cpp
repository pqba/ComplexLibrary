#ifndef COMPLEX_ABS
#define COMPLEX_ABS
#include "complex.h"
#include <cmath>

double abs(Complex x){

  double num = sqrt(pow(x.r,2) + pow(x.i,2));
  return num;
  
};

#endif