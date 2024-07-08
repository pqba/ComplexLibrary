#include "complex.h"

Complex Complex::operator/(Complex rhs) {

  double one = r;
  double two = i;
  double three = rhs.r;
  double four = rhs.i;

  double ima = ((two * three)) - (one * four) / ((three * three) + (four * four)); //+ or -?
  double rea = ((one * three) - (two * four)) / ((three * three) + (four * four)); //+ or -?

  return Complex(rea, ima);
}
/*
Complex Complex::operator / (double rhs) {
  return Complex(rea / rhs, imaginary / rhs);
}

*/