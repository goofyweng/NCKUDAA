//File: ex9-1.cpp
//Please write a program to ask user to enter a sentence,
//count the number of words in this sentence and display words one-by-one on screen.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  string str;
  cout << "Enter a sentence:" << endl;
  getline(cin,str);
  int numspace = 0; //number of spaces
  for (int idx = 0 ; idx < str.length() ; idx++)
  {
    char c = str[idx];
    if (isspace(c))
        numspace += 1;
  }
  cout << "There are " << numspace + 1 << " words in the sentence." <<endl;

  char words[numspace+1][10];
  int startIdx = 0;
  int wordIdx = 0;
  for (int jdx = 0 ; jdx < str.length() ; jdx++)
  {
    char c = str[jdx];
    if (isspace(c))
    {
      // cout << str.substr(startIdx, str.find(" ", startIdx)-startIdx) << endl;
      string tmp = str.substr(startIdx, str.find(" ", startIdx)-startIdx);
      strcpy(words[wordIdx], tmp.c_str());
      startIdx = jdx + 1;
      ++wordIdx;
    }
    else if (str.find(" ", startIdx) == -1)
    {
      // cout << str.substr(startIdx, str.length()-startIdx) << endl;
      string tmp = str.substr(startIdx, str.find(" ", startIdx)-startIdx);
      strcpy(words[wordIdx], tmp.c_str());
      break;
    }
  }
  cout << "They are ";
  for ( int i = 0 ; i < numspace + 1 ; i++)
  {
    if (i < numspace-1)
      cout << "''"<< words[i] << "''"<<", ";
    else if ( i == (numspace-1))
      cout << "''"<< words[i] << "''";
    else if ( i ==numspace)
      cout << " and " << "''"<< words[i] << "''" << endl;
  }
  return 0;
}
