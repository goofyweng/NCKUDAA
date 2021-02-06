//Write a function named fallingDistance
//that accepts an object’s falling time (in seconds) as an argument.
//The function should return the distance, in meters,
//that object has fallen during that time interval.
//Write a program that demonstrates the function
//by calling it in a loop that passes the values 1 through 10 as arguments,
//and display the return value
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
void Distance(int [10]);

int main()
{
  int t[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  Distance(t);

  return(0);
}

void Distance(int t[10])
{
  double g = 9.8;
  double dis;
  for ( int i = 0 ; i<10 ; i++)
  {
    dis = 0.5*g * pow(t[i], 2);
    cout << "An object can fall " << setw(5) << dis
      << " meters in " << setw(2) << t[i] << " second(s)." << endl;
  }
}
