//Design a system which can calculate
//the greatest common divisor (g.c.d.) and least common
//multiple (l.c.m.) of 5 integers.
#include <iostream>
using namespace std;
int gcd(int v1, int v2);
int lcm(int v1 ,int v2);

int main()
{
  int v1, v2, v3, v4, v5;
  int value[5];
  cout << "Input five integer number:";
  cin >> value[0] >> value[1] >> value[2] >> value[3] >> value[4];


  cout << "g.c.d. : "
    << gcd(value[4], gcd(value[3], gcd(value[2], gcd(value[1] ,value[0]))))
    << endl;
  cout << "l.c.m. : "
    << lcm(value[4], lcm(value[3], lcm(value[2], lcm(value[1] ,value[0]))))
    << endl;
  return 0;
}

int gcd(int v1 , int v2)
{
  if( v1 > v2 && v2 > 0)
  {
    if (v1 %v2 == 0)
      return v2;
    else
        gcd(v2, v1%v2);
  }

  else if( v1 < v2 && v1 > 0)
  {
    if (v2 %v1 == 0)
      return v1;
    else
        gcd(v2%v1, v1);
  }
}

int lcm(int v1, int v2)
{
  int result;
  result = v1 * v2 / gcd(v1, v2);
  return result;
}
