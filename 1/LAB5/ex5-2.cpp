//Design a system which can calculate
//the greatest common divisor (g.c.d.) and
//least common multiple (l.c.m.) of 2 integers.
#include <iostream>
using namespace std;

int main()
{
  int v1, v2;
  int gcd, lcm;
  cout << "Input value 1: " << endl;
  cin >> v1 ;
  cout << "Input value 2: " << endl;
  cin >> v2 ;

  if( v1 < v2 )
  {
    for ( int i = 1 ; i < v1 ; i++)
    {
      if ( v1%i == 0 && v2%i == 0)
        gcd = i;
      else continue;
    }
  }

  if( v2 < v1 )
  {
    for ( int i = 1 ; i < v2 ; i++)
    {
      if ( v1%i == 0 && v2%i == 0)
        gcd = i;
      else continue;
    }
  }

  lcm = v1 * v2 / gcd;
  cout << "g. c. d. : " << gcd << endl;
  cout << "l. c. m. : " << lcm << endl;

  return 0;
}
