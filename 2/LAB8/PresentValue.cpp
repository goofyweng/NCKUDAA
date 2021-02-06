//P, present value
//F, future value
//r, anual rate
//n, number of years that you plan to let the money sit in the accout
//presentValue is a function to help you do your  investment and financial management
#include <iostream>
#include <cmath>
using namespace std;
double presentValue(const double F, const double r, const int n);
// void checkAns(const double P, const double  r, const int n);
int main()
{
  double F, r, P;
  int n;
  cout << "The future value (ex: 10000): $";
  cin >> F;
  cout << "The annual interest rate (such as 0.042): ";
  cin >> r;
  cout << "How many years you plan to invest: ";
  cin >> n;
  P = presentValue(F, r, n);
  cout << "The amount that you need to deposit today is $"
    << P << endl;

  return 0;
}

double presentValue(const double F, const double r, const int n)
{
  double P; //present value
  P = exp( (1/pow((1 + r), n) ) * log(F));
  return P;
}

// void checkAns(const double P, const double  r, const int n)
// {
//   double f, a;
//   a = pow((1+r), n);
//   cout << a;
//   f = pow(P, a);
//   cout << "Final value is " << f << endl;
// }
