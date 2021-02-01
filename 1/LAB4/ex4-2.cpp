//Write a C++ program to print out all prime numbers
//which is smaller than and equal to the input number.
#include <iostream>
using namespace std;

int main()
{
  int value;

  cout << "Enter an integer value: \n";
  cin >> value;
  for ( int i = 1; i <= value ; i++)
  {
    int count = 0;
    for ( int j = 1 ; j <= i ; j++)
    {
      if (i % j == 0)
        {
          count += 1;
          // cout << "count is now = "<< count << endl;
        }
    }

    if (count ==2 )
      {
        cout << i <<' ';
      }
  }
  cout << endl;
  return 0;
}
