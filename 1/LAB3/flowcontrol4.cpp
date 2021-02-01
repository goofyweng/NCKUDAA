//File: lab3-4.cpp
#include <iostream>
using namespace std;
int main()
{
  float score;
  char grade;
  cout << " Enter your score: " << endl;
  cin >> score;
  if ( score >= 80)
      grade = 'A';
  else if ( score >= 70)
      grade = 'B';
  else if ( score >= 60)
      grade = 'C';
  else
      grade = 'F';

  cout << " You get level " << grade << endl;
  return 0;
}
