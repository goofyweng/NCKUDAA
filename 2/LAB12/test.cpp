//test.cpp
#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
  string *s = new string[4];
  s[0]= "1023";
  long i = stol(s[0]);

  cout << i+10 << endl;
  cout << "i is: " << typeid(i).name() << endl;

  return 0;
}
