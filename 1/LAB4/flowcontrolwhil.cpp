//File: lab4-3.cpp
#include <iostream>
using namespace std;

int main()
{
  int i;
  i = 1;
  cout << " From the while loop: " << endl;
  while ( i <= 10 )
  {
    cout << i << '\t';
    i++;
  }

  cout << "\n From the for loop: " << endl;
  for ( i = 1 ; i <= 10 ; i++)
  {
    cout << i << '\t';
  }

  return 0;
}
