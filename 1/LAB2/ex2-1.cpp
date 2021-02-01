//ex2-1.cpp
//Ask the user to imput two integers. Then, show the results for the sum, subtraction,
//multiplication and division of the two integers.
#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "Enter the first number: "<< endl;
  cin >> a;
  cout << "Enter the second number: "<< endl;
  cin >> b;
  cout << a << " + " <<  b << " = " << a+b <<endl;
  cout << a << " - " <<  b << " = " << a-b <<endl;
  cout << a << " * " <<  b << " = " << a*b <<endl;
  cout << a << " / " <<  b << " = " << a/b <<endl;
  return 0;
}
