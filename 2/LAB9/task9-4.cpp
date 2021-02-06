//File: lab9-4.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
  string heading = "Hello";
  string ending("Welcome to my house!!");
  string name;
  cout << "Enter your name: ";
  cin >> name;
  string sentence = heading + ", " + name + "!!\n"  + ending;
  cout << sentence << endl;
  return 0;
}
