#include <iostream>
using namespace std;

double factorial(int x);
float sumrecp(int n);
float sumrf(int n);
int main()
{
  int val;
  cout << "Enter an integer value for the number of order n:" << endl;
  cin >> val;
  cout << "The result of S1 and S2 are: " << endl
    << "S1 = " << sumrecp(val) << endl
    << "S2 = " << sumrf(val) << endl;
  return 0;
}

double factorial(int x)
{
  double total = 1;
  for ( int i = 1 ; i <= x ; i++ )
  {
    total = total * double(i);
  }
  return total;
}

float sumrecp( int n)
{
  float total = 1;
  for ( float i = 2 ; i <= n ; i++)
  {
    total = total + 1/i ;
  }
  return total;
}

float sumrf(int n)
{
  float total = 1;
  for ( float i = 2 ; i <= n ; i++)
  {
    total = total + 1/float(factorial(i));
  }
  return total;
}
