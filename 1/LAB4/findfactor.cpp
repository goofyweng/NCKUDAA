//Write a C++ program to print out all factors for a number.
#include <iostream>
using namespace std;

int main()
{
  int value;
  int count = 0;
  cout << "Enter an integer value: \n";
  cin >> value;
  for ( int i = 1 ; i <= value ; i++ )
      if (value % i == 0)
      {
          cout << i << " is a factor of "<< value <<endl;
          count +=1;
      }

  // cout << "count is " << count << endl;
  if (count ==2 && value != 1)
      cout << value << " is a prime number!!\n";
  else if ( value == 1) cout << value
      << " is not a prime number!!\n";

  return 0;
}
