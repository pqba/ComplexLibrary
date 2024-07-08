#include "complex_arg.h"

double arg(Complex x) {
    return atan2(x.i, x.r);
}