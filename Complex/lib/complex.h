#ifndef COMPLEX_H
#define COMPLEX_H
#include <cmath>

class Complex{

  public:
  double r;
  double i;


  Complex()
{
  r = 0.0;
  i = 0.0;
    
  }
  Complex(double realnum,double imaginarynum){

    r = realnum;
    i = imaginarynum;
    
  }

  void operator+=(Complex);
  void operator-=(Complex);
  void operator*=(Complex);
  void operator/=(Complex);
  Complex operator+(Complex) const;
  Complex operator-(Complex);
  Complex operator*(Complex);
  Complex operator/(Complex);
  Complex exp(Complex);
  Complex polar(double, double);
  Complex sqrt(Complex);
  double imag(Complex);
  double real(Complex);
  double norm(Complex);
  double pow(Complex);
  Complex tan(Complex);
  Complex sin(Complex);
  Complex cos(Complex);

 
  Complex conj(Complex);
  double abs(Complex x);
double arg(Complex x);
Complex log(Complex x);
Complex log10(Complex x);

};

#endif