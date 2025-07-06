#include "complex.h"

Complex Complex::operator-(Complex rhs) {
  double one = rhs.r;
  double two = rhs.i;
  double three = r;
  double four = i;

  double rea = three - one;
  double ima = four - two;

  return Complex(rea,ima);

};