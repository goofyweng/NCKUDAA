//ex11-2.cpp
//Please write a program to generate a sequence from 1 to n and arrange the values randomly.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int n;
  while (1) {
    cout << "Please enter a number: ";
    cin >> n;
    if (n==-1) break;
    int *vec = new int[n];
    for (int idx = 0; idx < n; idx++)
    {
      vec[idx] = idx+1;
    }

    int *ptr=&vec[0];
    // cout << "Before: ";
    // for (int idx = 0; idx < n; idx++)
    // {
    //   cout << *ptr << " ";
    //   ptr++;
    // }
    // cout << endl;

    // shuffle the array
    // reference: https://www.geeksforgeeks.org/shuffle-a-given-array-using-fisher-yates-shuffle-algorithm/
    // cout << "After: ";
    for (int idx = n-1; idx>1; idx--)
    {
      srand( time(NULL) );
      //assign the range of random numbers
      int min = 0;
      int max = idx;
      int j = rand() % (max - min + 1) + min; //random idx
      int temp = vec[idx];
      vec[idx] = vec[j];
      vec[j]= temp;
    }

    ptr=&vec[0];
    for (int idx = 0; idx < n; idx++)
    {
      cout << *ptr << " ";
      ptr++;
    }
    cout << endl;

    delete []vec;
  }

  return 0;
}
