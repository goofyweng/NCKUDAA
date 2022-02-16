//ex11-1.cpp
//Please write a program to sum up two polynomials.
//Note that the maximum degree is 10.
#include <iostream>
using namespace std;


int main()
{
  int d1, d2;
  cout << "Please enter the degree of polynomial 1: ";
  cin >> d1;
  int *vec1 = new int[d1+1];

  cout << "Please enter the coefficient in order: ";
  for (int idx = 0; idx < d1+1; idx++)
  {
    cin >> vec1[idx];
  }
  cout << "Polynomial 1 is :";
  for (int idx = 0; idx < d1+1; idx++)
  {
    if (vec1[idx]==1)
    {
      cout << "X^" << d1-idx;
      if (vec1[idx+1] >= 0) cout << " + ";
      else cout << " ";
    }
    else if (vec1[idx]==0) continue;
    else if (idx==d2-1 && vec1[idx+1]==0)
    {
      cout << vec1[idx] << "X";
    }
    else if (idx==d1) cout << vec1[idx];
    else
    {
      cout << vec1[idx] << "X^" << d1-idx;
      if (vec1[idx+1] >= 0) cout << " + ";
      else cout << " ";
    }
  }
  cout << endl;

  cout << "Please enter the degree of polynomial 2: ";
  cin >> d2;
  int *vec2 = new int[d2+1];

  cout << "Please enter the coefficient in order: ";
  for (int idx = 0; idx < d2+1; idx++)
  {
    cin >> vec2[idx];
  }
  cout << "Polynomial 2 is :";
  for (int idx = 0; idx < d2+1; idx++)
  {
    if (vec2[idx]==1)
    {
      cout << "X^" << d2-idx;
      if (vec2[idx+1] >= 0) cout << " + ";
      else cout << " ";
    }
    else if (vec2[idx]==0) continue;
    else if (idx==d2-1 && vec2[idx+1]==0)
    {
      cout << vec2[idx] << "X";
    }
    else if (idx==d2) cout << vec2[idx];
    else
    {
      cout << vec2[idx] << "X^" << d2-idx;
      if (vec2[idx+1] >= 0) cout << " + ";
      else cout << " ";
    }
  }
  cout << endl;

  int *ptr1 = &vec1[d1]; //point to the last element in vec1
  int *ptr2 = &vec2[d2];

  int *sum = new int[d1+1]; //store the sum result
  int *ptr3 = &sum[d1]; //point to the last element in sum

  for (int idx = 0; idx < d2+1; idx++)
  {
    *ptr3 = *ptr1 + *ptr2;
    ptr1--;
    ptr2--;
    ptr3--;
  }
  for (int idx = 0; idx < d1-d2; idx++) //fill in the rest of the element from vec1 into sum
  {
    *ptr3 = *ptr1;
    ptr1--;
    ptr3--;
  }

  ptr3=&sum[0];
  cout << "Sum result: ";
  // for (int idx = 0; idx < d1+1; idx++)
  // {
  //   cout << *ptr3 << " ";
  //   ptr3++;
  // }
  for (int idx = 0; idx < d1+1; idx++)
  {
    if (sum[idx]==1)
    {
      cout << "X^" << d1-idx;
      if (sum[idx+1] >= 0) cout << " + ";
      else cout << " ";
    }
    else if (sum[idx]==0) continue;
    else if (idx==d1-1 && sum[idx+1]==0)
    {
      cout << sum[idx] << "X";
    }
    else if (idx==d1)
    {
      cout << sum[idx];
    }
    else
    {
      cout << sum[idx] << "X^" << d1-idx;
      if (sum[idx+1] >= 0) cout << " + ";
      else cout << " ";
    }
  }

  delete []vec1;
  delete []vec2;
  delete []sum;
  return 0;
}
