//Write a C++ program to print out the multiplication table.
#include <iostream>
using namespace std;

int main()
{
  int size;
  int reachcont = 1;
  while (reachcont) {
    cout << "Enter the size of multiplication table(1-9): \t";
    cin >> size;

    switch (size) {
      case 1:  case 2: case 3:
      case 4:  case 5: case 6:
      case 7:  case 8: case 9:
          for ( int i = 1 ; i <= size ; i++)
          {
            for ( int j = 1 ; j <= size; j++ )
                cout << i << " * " << j << " = " << i*j << '\t';

            cout << endl;
          }
          reachcont = 0;
          break;

      default:
          cout << "The size of multiplication table should be 1~9.\n";
          break;

    }
  }


  return 0;
}
