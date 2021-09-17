//ReplaceSubstring Funttion
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void ReplaceSubstring(string str1, string str2, string str3){

  int index;
  cout << "Initial string: " << str1 << endl;
  while ((index = str1.find(str2)) != string::npos) {
    str1.replace(index, str3.length(), str3);
  }

  cout << "Final string: " << str1 << endl;
}

int main() {
  string str1, str2, str3;
  cout << "Please type in a string: ";
  getline(cin, str1);
  // char* s1;
  // s1 = &str1[0];

  cout << "Please type in the second string: ";
  getline(cin, str2);
  // char* s2;
  // s2 = &str2[0];

  cout << "Please type in the third string: ";
  getline(cin, str3);
  // char* s3;
  // s3 = &str3[0];

  ReplaceSubstring(str1, str2, str3);
  // int index;
  // cout << "Initial string: " << str1 << endl;
  // while ((index = str1.find(str2)) != string::npos) {
  //   str1.replace(index, str3.length(), str3);
  // }
  //
  // cout << "Final string: " << str1 << endl;
  return 0;
}
