#include "complex.h"

double arg(Complex x) {
    return atan2(x.r, x.i);
}