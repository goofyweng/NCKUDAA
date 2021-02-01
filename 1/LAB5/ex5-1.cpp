//Design a system where two players
//p1 is user, p2 is computer
//can play the finger-guessing game
//('s' for scissors, 'r' for rock, 'p' for paper).
//Task5-3:Exercise
#include <iostream>
#include <cstdlib> // for function rand()
#include <ctime>
using namespace std;

int main()
{
  srand(time(NULL));

  int com;
  com = rand()%9 + 1;     //generate a random number in 1~9
  // cout << "current com is " << com << endl;

  char p1, p2;
  cout << "Enter s, r, p for player 1 : ";
  cin >> p1;
  cout << "Enter s, r, p for player 2 : ";

  switch (com) {
    case 1: case 2: case 3:
      p2 = 's';
      break;

    case 4: case 5: case 6:
      p2 = 'p';
      break;

    case 7: case 8: case 9:
      p2 = 'r';
      break;
  }
  cout << p2 << endl;

  //cases for p1 to win
  if ( (p1=='s' && p2 == 'p') || (p1=='r' && p2 == 's')
      || (p1=='p' && p2 == 'r'))
      cout << "Player 1 win!" << endl;
  //cases for p2 to win
  else if ( (p2=='s' && p1 == 'p') || (p2=='r' && p1 == 's')
      || (p2=='p' && p1 == 'r'))
      cout << "Player 2 win!" << endl;
  else cout << "Two players tie!" << endl;

  return 0;

}
