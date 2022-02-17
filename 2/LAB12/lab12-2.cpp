//File: lab12-2.cpp
#include <iostream>
using namespace std;
int **New2DArray(const int,const int);
void Initial2DArray(int **,const int,const int);
void Display2DArray(int **,const int,const int);
void Delete2DArray(int **,const int);

int main()
{
  int m,n;
  cout << "Enter the size of column: " << endl;
  cin >> m;
  cout << "Enter the size of column: " << endl;
  cin >> n;
  int **vec = New2DArray(m,n);
  Initial2DArray(vec,m,n);
  Display2DArray(vec,m,n);
  Delete2DArray(vec,n);
  return 0;
}

int **New2DArray(const int m, const int n)
{
  int **mat = new int *[m];
  for (int idx = 0;idx < m; idx++)
    mat[idx] = new int [n];
  return mat;
}
void Initial2DArray(int **mat, const int m, const int n)
{
  for (int idx = 0;idx < m;idx++)
  {
    for (int jdx = 0; jdx < n; jdx++)
      mat[idx][jdx] = idx + jdx;
  }
}
void Display2DArray(int **mat, const int m, const int n)
{
  for (int idx = 0;idx < m; idx++)
  {
    for (int jdx = 0;jdx < n; jdx++)
      cout << mat[idx][jdx] << " ";
    cout << endl;
  }
}
void Delete2DArray(int **mat, const int n)
{
  for (int idx = 0; idx < n; idx++)
    delete [] mat[idx];
  delete []mat;
}
