#include "complex.h"

Complex Complex::operator+(Complex rhs) const{
  double one = rhs.r;
  double two = rhs.i;
  double three = r;
  double four = i;

  double rea = one + three;
  double ima = two + four;
  
  return Complex(rea,ima);
  
};