//Design a system where two players
//can play the finger-guessing game
//('s' for scissors, 'r' for rock, 'p' for paper).
//Task3-5:Exercise
#include <iostream>
using namespace std;

int main()
{
  char p1, p2;
  cout << "Enter s, r, p for player 1 : ";
  cin >> p1;
  cout << "Enter s, r, p for player 2 : ";
  cin >> p2;

  //cases for p1 to win
  if ( (p1=='s' && p2 == 'p') || (p1=='r' && p2 == 's')
      || (p1=='p' && p2 == 'r'))
      cout << "Player 1 win!" << endl;
  else if ( (p2=='s' && p1 == 'p') || (p2=='r' && p1 == 's')
      || (p2=='p' && p1 == 'r'))
      cout << "Player 2 win!" << endl;
  else cout << "Two players tie!" << endl;
  
  return 0;

}
