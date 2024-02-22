#include "complex.h"

void Complex::operator+=(Complex rhs){

  r += rhs.r;
  i += rhs.i;
  
};