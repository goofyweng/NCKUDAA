//File: lab4-4.cpp
#include <iostream>
using namespace std;

int main()
{
  int i, j;
  i = j = 10;
  cout << "From do...while loop: \n";
  do {
      cout << i << '\t';
      i++;
  } while( i < 10 );

cout << " \n From while loop: \n";
  while ( j < 10) {
    cout << j << '\t';
    j++;
  }

  return 0;
}
