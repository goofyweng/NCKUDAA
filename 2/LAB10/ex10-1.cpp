//File: ex9-1.cpp
//Please write a program to ask user to enter a sentence,
//count the number of words in this sentence and display words one-by-one on screen.
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
  char *filename = argv[1];
  ifstream in_file(filename);
  if (in_file.fail())
  {
    cout << "File " << filename << " does not exist !!" << endl;
    exit(1);
  }
  string textline;
  int count = 0;
  while (getline(in_file,textline,'\n'))
  {
    cout << count << ": " << textline << endl;
    ++count;
    int numspace = 0; //number of spaces
    for (int idx = 0 ; idx < textline.length() ; idx++)
    {
      char c = textline[idx];
      if (isspace(c))
          numspace += 1;
    }
    ofstream myfile;
    myfile.open("ex10-1.1.out",ios::app);
    cout << "Line " << count << " has " << numspace + 1 << " words. " ;
    myfile << "Line " << count << " has " << numspace + 1 << " words. " ;

    //split textline by spaces...
    char words[numspace+1][10];
    int startIdx = 0;
    int wordIdx = 0;
    for (int jdx = 0 ; jdx < textline.length() ; jdx++)
    {
      char c = textline[jdx];
      if (isspace(c))
      {
        // cout << str.substr(startIdx, str.find(" ", startIdx)-startIdx) << endl;
        string tmp = textline.substr(startIdx, textline.find(" ", startIdx)-startIdx);
        strcpy(words[wordIdx], tmp.c_str());
        startIdx = jdx + 1;
        ++wordIdx;
      }
      else if (textline.find(" ", startIdx) == -1)
      {
        // cout << str.substr(startIdx, str.length()-startIdx) << endl;
        string tmp = textline.substr(startIdx, textline.find(" ", startIdx)-startIdx);
        strcpy(words[wordIdx], tmp.c_str());
        break;
      }
    }

    cout << "They are ";
    myfile << "They are ";

    for ( int i = 0 ; i < numspace + 1 ; i++)
    {
      if (i < numspace-1){
        cout << "\""<< words[i] << "\""<<", ";
        myfile << "\""<< words[i] << "\""<<", ";
      }
      else if ( i == (numspace-1)){
        cout << "\""<< words[i] << "\"";
        myfile << "\""<< words[i] << "\"";
      }
      else if ( i ==numspace){
        cout << " and " << "\""<< words[i] << "\"" << endl;
        myfile << " and " << "\""<< words[i] << "\"" << endl;
      }

    }
    //slpit textline by spaces done...
    myfile.close();
  }
  in_file.close();


  return 0;
}
