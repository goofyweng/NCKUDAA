//Write a C++ program to convert the decimal number
//to the binary number.
#include <iostream>
#include <cmath>
using namespace std;

void con(long);
void print(long bin[30], int& size);
int size = 0;
long bin[30];

int main()
{
  long value;

while (1) {
  cout << "Enter a decimal value: " << endl;
  cin >> value;

  if (value >= 0)
  {
    con(value);
    cout << "The binary value of " << value << " is " ;
    print(bin , size);
  }
  else
  {
    cout << "Exit!!" << endl;
    exit(0);
  }
}
  return 0;
}

void con(long value)
{
  if ( value/2 >= 1 || value == 1)
  {
    bin[size] = value%2 ;
    cout << value%2 ;
    size +=1;
    con(value/2);
  }
  else
    cout << "\nDone!" << endl;
}

void print(long bin[30], int& size)
{
  for ( int i =  size -1 ; i >= 0 ; i --)
  {
    cout << bin[i] ;
  }
  size = 0;
  cout << endl;
}
