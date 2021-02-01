//File: lab7-1.cpp
#include <iostream>
using namespace std;

void swap(int&, int& );


int main()
{
  int x = 5, y = 6;
  cout << "x = " << &x << " and y = " << &y << endl;
  swap(x, y);
  cout << "x = " << &x << " and y = " << &y << endl;
  return 0;
}
void swap(int& x, int& y)
{
  int temp;
  temp = x;
  cout << "temp is " << temp << endl;
  x = y;
  cout << "x in temp is at " << &x << endl;
  y = temp;
  cout << "y in temp is  at" << &y << endl;

}
