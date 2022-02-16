//File: lab11-5.cpp
#include <iostream>
using namespace std;
int main()
{
  int i = 10; int j = 20;
  int *pi = 0;
  int *pi2 = &i;
  pi = pi2;
  cout << "pi is " << pi << endl;
  pi2 = 0;
  cout << "pi2 is " << pi2 << endl;
  pi2 = &i;
  cout << "pi2 is " << pi2 << endl;
  cout << "*pi2 is " << *pi2 << endl;
  cout << "&pi2 is " << &pi2 << endl;

  pi = &i;
  double d = 10.5;
  double *pd = &d;
  pi = pd;
  pi = &d;
  return 0;
}
