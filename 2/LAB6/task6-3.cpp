//File: lab6-3.cpp
#include <iostream>
using namespace std;
int func1(int x);
int func2(int x);
int main()
{
  int a;
  cout << "Enter a value (>0): ";
  cin >> a;
  cout << "func1(" << a << ") = " << func1(a) << endl;
  cout << "func2(" << a << ") = " << func2(a) << endl;
  return 0;
}

int func1(int x)
{
  return 2*x+5;
}

int func2(int x)
{
  int sum = 0;
  for (int idx = 0 ; idx < x ; idx++)
  {
    sum += idx;
  }
  return sum;
}