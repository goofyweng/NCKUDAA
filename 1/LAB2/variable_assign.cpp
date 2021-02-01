//File lab2-6.cpp
#include <iostream>
using namespace std;

int main()
{
  int x,y;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;

  y = 25;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;

  x = 10;
  cout << "current value of x is = " << x++ << endl;
  //x++ returns the value of x and then increments
  cout << "current value of x is = " << x << endl;
  cout << "current value of x is = " << ++x << endl;
  //++x increments the value of x and then returns x
  cout << "current value of x is = " << x << endl;

  return(0);

}
