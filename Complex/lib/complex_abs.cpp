#include "complex_abs.h"

double abs(Complex x) {
    return sqrt(pow(x.r, 2) + pow(x.i, 2));
}