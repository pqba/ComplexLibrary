#ifndef COMPLEX_H
#define COMPLEX_H
#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

#include <cmath>
#include <ostream>

class Complex {
   public:
    double r;
    double i;

    Complex() : r(0.0), i(0.0) {}
    Complex(double realnum, double imaginarynum) : r(realnum), i(imaginarynum) {}


    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << "Complex(" << c.r << (c.i >= 0 ? " + " : " - ") << std::abs(c.i) << "i)";
        return os;
    }
    // Member functions 
    Complex operator+(Complex rhs);
    Complex operator-(Complex rhs);
    Complex operator*(Complex rhs);
    Complex operator/(Complex rhs);

    void operator+=(Complex rhs);
    void operator-=(Complex rhs);
    void operator*=(Complex rhs);
    void operator/=(Complex rhs);
};

double real(Complex x);
double imag(Complex x);

Complex exp(Complex x);
Complex polar(double rho, double theta);
Complex sqrt(Complex x);
double norm(Complex x);
double pow(double a, double b);
Complex tan(Complex x);
Complex sin(Complex x);
Complex cos(Complex x);
Complex conj(Complex x);
double abs(Complex x);
double arg(Complex x);
Complex log(Complex x);
Complex log10(Complex x);

#endif  // COMPLEX_H