#include "complex.h"
#include <cmath>


Complex tan(Complex x) {

  Complex y = Complex((tan(x.r)- (tan(x.r)*tanh(x.i)*tanh(x.i)))/ (1+(tan(x.r)*tan(x.r)*tanh(x.i)*tanh(x.i))),(tanh(x.i)+ (tan(x.r)*tan(x.r)*tanh(x.i)))/ (1+(tan(x.r)*tan(x.r)*tanh(x.i)*tanh(x.i))));
  return y;



  /*
  return Complex();
  
  Complex q = sin(x) / cos(x);
  return q;
  */
}