//Design a perimeter calculation system
//which computes the perimeter of a rectangular, square,
//or circle, respectively.
#include <iostream>
#include <cmath>
using namespace std;

void select();
double rect( double l, double w);
double squ( double l);
double circ( double r);

int main()
{
  while (1)
  {
      select();
  }

  return 0;
}

void select()
{
  int t;
  double a, b;
  cout << "====================\n"
    << "1. Rectangular 2. Square 3. Circle 4. Exit\n"
    << "Choose the type of perimeter you want to calculate:" << endl;
    cin >> t;
    cout << "you selected " << t << "!\n";

    switch (t)
    {
      case 1:
        cout << "Please enter the Length and Width respectively.\n";
        cin >> a;
        cin >> b;
        cout << "The perimeter of rectangular with (Length, Width) = ("
          << a << ", " << b << ") is " << rect(a,b) << endl;
        break;

      case 2:
        cout << "Please enter the Length.\n";
        cin >> a;
        cout << "The perimeter of square with (Length) = ("
          << a << ") is " << squ(a) << endl;
        break;

      case 3:
        cout << "Please enter the radious of the circle.\n";
        cin >> a;
        cout << "The perimeter of square with (radious) = ("
          << a << ") is " << circ(a) << endl;
        break;

      case 4:
        cout << "Goodbye!" << endl;
        exit(0);

      default:
        cout << "Please follow the instruction carefully." << endl;
        break;
    }
}

double rect( double l, double w)
{
  return 2 * ( l + w);
}

double squ( double l)
{
  return 4*l;
}

double circ( double r)
{
  const double PI = 3.1415926;
  return 2*PI*r;
}
