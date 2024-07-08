#include "complex.h"
#include <cmath>

double norm(Complex x){
  double num = pow(x.r,2) + pow(x.i,2);
  return num;

}
