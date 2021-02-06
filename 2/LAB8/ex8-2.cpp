//Please write a program which can generate a matrix randomly
//with specific number of rows and columns.
//the number of rows and columns are less then 10
//the range of the elements in matrix is (0, 20].
//the modified matrix is composed by sorting the elements for each row.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int MaxSize = 10;
void DisplayMatrix(const int [][MaxSize],const int,const int);
void GenerateMatrix(int [][MaxSize],const int,const int);
void SortMatrix(int [][MaxSize],const int,const int);
void InsertionSort(int [],const int);

int main()
{
  int numrows,numcols;
  int IntMatrix[MaxSize][MaxSize];
  cout << "Please enter the number of rows: ";
  cin >> numrows;
  cout << "Please enter the number of columns: ";
  cin >> numcols;
  cout << "The original matrix is" << endl;
  GenerateMatrix(IntMatrix,numrows,numcols);
  DisplayMatrix(IntMatrix,numrows,numcols);
  SortMatrix(IntMatrix,numrows,numcols);
  cout << "The modified matrix is" << endl;
  DisplayMatrix(IntMatrix,numrows,numcols);
}

void DisplayMatrix(const int matrix[][MaxSize],const int rows,const int cols)
{
  for (int idx = 0 ; idx < rows ; idx++)
  {
    for (int jdx = 0 ; jdx < cols ; jdx++)
    {
      cout << matrix[idx][jdx] << " ";
    }
    cout << endl;
  }
}

void GenerateMatrix(int matrix[][MaxSize],const int rows,const int cols)
{
  srand(time(NULL));
  for (int idx = 0 ; idx < rows ; idx++)
  {
    for (int jdx = 0 ; jdx < cols ; jdx++)
    {
      matrix[idx][jdx] = rand()%20 + 1;
    }
  }
}

// void SortMatrix(int matrix[][MaxSize],const int rows,const int cols)
// {
//   int temp[cols];
//   for (int idx = 0 ; idx<rows ; idx++)
//   {
//     for (int jdx = 0; jdx<cols ; jdx++)
//     {
//       temp[jdx] = matrix[idx][jdx];
//     }
//
//     InsertionSort(temp, cols);
//
//     for (int jdx = 0; jdx<cols ; jdx++)
//     {
//       matrix[idx][jdx] = temp[jdx];
//     }
//   }
// }

void SortMatrix(int matrix[][MaxSize],const int rows,const int cols)
{
  int* temp;
  for (int idx = 0 ; idx<rows ; idx++)
  {
    temp = matrix[idx];
    InsertionSort(temp, cols);
  }
}

void InsertionSort(int vec[],const int size)
{
  for (int jdx = 1; jdx < size; jdx++)
  {
    int key = vec[jdx];
    int idx = jdx - 1;
    while ( idx >= 0 && vec[idx] < key)
    {
      vec[idx+1] = vec[idx];
      --idx;
    }
    vec[idx+1] = key;
  }
}
