//Most Frequent Character
// #include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
char most_fre_char(char* str)
{
    // Create array to keep the count of individual
    // characters and initialize the array as 0
    int count[ASCII_SIZE] = {0};

    // Construct character count array from the input
    // string.
    int len = strlen(str);
    int max = 0;  // Initialize max count
    char result;   // Initialize result

    // Traversing through the string and maintaining
    // the count of each character
    for (int i = 0; i < len; i++) {
        count[str[i]]++;
        if (max < count[str[i]]) {
            max = count[str[i]];
            result = str[i];
        }
    }

    return result;
}

int main() {

  string input;
  cout << "Please type in a string: ";
  getline(cin, input);

  char* str;
  str = &input[0];
  // char str[] = "sample string";
  cout << "Max occurring character is " << most_fre_char(str);

  return 0;
}
