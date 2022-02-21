// lab1-1-main.cpp
#include <iostream>
#include "lab1-1.cpp"


// using namespace Complex;
int main()
{
  Complex::Cplex n;
  n.real = 1 * Complex::pi;
  n.image = -0.5;
  Complex::showComplex(n);
  return 0;

  // Cplex n;
  // n.real = 1 * pi;
  // n.image = -0.5;
  // showComplex(n);
  // return 0;
}
