#include "complex.h"

double pow(double a, double b) { 
    int acc = 1;
    for(int i = 0; i < b; i++){
        acc *= a;
    }
    return acc;
 }
