//File: lab3-5.cpp
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
        cout << " You get level " << grade << endl;
  if ( score >= 70)
      grade = 'B';
        cout << " You get level " << grade << endl;
  if ( score >= 60)
      grade = 'C';
        cout << " You get level " << grade << endl;
  if ( score < 60)
      grade = 'F';

  cout << " You get level " << grade << endl;
  return 0;
}
