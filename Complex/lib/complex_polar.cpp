#include "complex.h"

Complex polar(double mag, double ang){
  Complex y = Complex(mag* cos(ang), mag*sin(ang));
  return y;
  
};