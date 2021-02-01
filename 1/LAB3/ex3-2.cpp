//Design a book-buying system.
//In the system, the customer could
//choose which book he/she
//wants to buy and the quantity of books.
//ex3-2.cpp
#include <iostream>
using namespace std;

int main()
{
  char book;
  int quan;

  cout << "Welcome to the book-buying system!!" << endl;
  cout << "The following are the list and the cost: " << endl;
  cout << "(A) Computer Sciense : An Overview \t $30"<< endl
      << "(B) Absoulte C++ \t $20" << endl
      << "(C) C++ Hoe to Program \t $40" << endl
      << "Please enter A, B, C to choose the book: "<< endl;
  cin >> book;

  switch (book) {
    case 'A' : case 'a':
      book = 'A';
      cout << "Now enter the quantity of books: "<< endl;
      cin >> quan;
      cout << "The total cost of item (" << book <<") is $"
        << quan*30 <<". Thanks for your coming. " << endl;
      break;

    case 'B' : case 'b':
      book = 'B';
      cout << "Now enter the quantity of books: "<< endl;
      cin >> quan;
      cout << "The total cost of item (" << book <<") is $"
        << quan*20 <<". Thanks for your coming. " << endl;
      break;

    case 'C' : case 'c':
      book = 'C';
      cout << "Now enter the quantity of books: "<< endl;
      cin >> quan;
      cout << "The total cost of item (" << book <<") is $"
        << quan*40 <<". Thanks for your coming. " << endl;
      break;

    default:
        cout << "Sorry, item (" << book << ") doesn't on our list."
          << endl;
        break;
  }

  return 0;
}
