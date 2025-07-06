#include "complex.h"

Complex Complex::operator*(Complex rhs) {
  
  double one = r;
  double two = i;
  double three = rhs.r;
  double four = rhs.i;

  double ima = (one * four) + (two * three); //+ or -?
  double rea = (one * three) - (two * four); //+ or -?

  return Complex(rea, ima);
}

/* Complex Complex::operator * (double rhs) {
  return Complex(rea * rhs, imaginary * rhs);
}
*/