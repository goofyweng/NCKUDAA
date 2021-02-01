//showing the power of a floating point number
//ex2-2.cpp
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  float a;
  cout << "Please enter the base floating-point number: " << endl;
  cin >> a;
  cout << "10 to the power of 1, 2, 3 and 4 are:"<< endl
      << setw(12) << fixed << setprecision(3) << pow(a, 1) << endl
      << setw(12) << setprecision(6) << pow(a, 2) << endl
      << setw(12) << setprecision(6) << pow(a, 3) << endl
      << setw(12) << setprecision(6) << pow(a, 4)<< endl;
}
