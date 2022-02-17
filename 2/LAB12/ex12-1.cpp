// file: ex12-1.cpp
#include <iostream>
using namespace std;
// function declaration
// InsertionSort() resize() and medium() are required
void InsertionSort(int *,int );
void Display1DArray(int *, const int );
void Medium(int *, const int );

int main()
{
  int *array;
  int n;
  cout << "Enter a size first: ";
  cin >> n;
  array = new int [n];
  int x;
  int idx = 0;
  cout << "Enter a sequence (stop by -1): " << endl;
  while (cin >> x)
  {
    if (x == -1) break;

    // store x to array;
    if (idx < n)
    {
      array[idx] = x;
      //cout << "idx: " << idx << " ;array[idx]: " << array[idx] << endl;
      idx++;
    }
    // resize array if number of input is larger than n
    else if (idx >= n)
    {
      int *temp = new int[idx];
      for (int i = 0; i < idx; i++)
      {
        temp[i] = array[i];
      }
      temp[idx] = x;
      //cout << "temp:" << endl;
      array = new int [2*n];
      //Display1DArray(temp, idx+1);
      for (int i = 0; i < idx+1; i++)
      {
        array[i] = temp[i];
      }
      //cout << "New array:" << endl;
      delete []temp;
      //Display1DArray(array, 2*n);
      n = n*2;
      idx++;
    }
  }

  cout << "Entered array:" << endl;
  Display1DArray(array, idx);
  InsertionSort(array, idx);
  cout << "InsertionSorted array:" << endl;
  Display1DArray(array, idx);

  Medium(array, idx);
  delete []array;
  return 0;
}
void InsertionSort(int *vec,int size)
{
  for (int jdx = 1; jdx < size; jdx++)
  {
    int key = vec[jdx];
    int idx = jdx - 1;
    while ( idx >= 0 && vec[idx] > key)
    {
      vec[idx+1] = vec[idx];
      --idx;
    }
    vec[idx+1] = key;
  }
}
void Medium(int *array, const int idx)
{
  // calculate the medium
  if ( idx%2 == 0 )
  {
    // cout << "There are even numbers" << endl;
    // cout << "idx/2=" << idx/2 << endl;
    cout << "The medium are " << array[idx/2-1] << " and " << array[idx/2] << "." << endl;
  }
  else
  {
    // cout << "There are odd numbers" << endl;
    // cout << "idx/2=" << idx/2 << endl;
    cout << "The medium is " << array[idx/2] << endl;
  }
}
void Display1DArray(int *vec, const int n)
{
  for (int idx = 0;idx < n;idx++)
    cout << vec[idx] << " ";
  cout << endl;
}
