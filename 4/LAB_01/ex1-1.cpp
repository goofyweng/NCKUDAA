//ex1-1.cpp
#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include "lab1-1.cpp"

using namespace Complex;
using namespace std;

inline void ReadTextFile(char *file, Cplex *a, Cplex *b)
{
  fstream fileh(file, ios::in);
  string textline;
  if (fileh.fail())
  {
    cout << "File " << file << " does not exist!!" << endl;
    exit(1);
  }
  int count = 0;
  string numberR, numberI;
  cout << "From the " << file << " file: " << endl;
  while (getline(fileh,textline,'\n'))
  {
    cout << textline << endl;

    if (textline.find("+")!=string::npos)
    {
      numberR = textline.substr(0, textline.find("+"));
      numberI = textline.substr(textline.find("+")+1, textline.find("i")-textline.find("+"));
      if (count == 0)
      {
        a->real = stod(numberR);
        a->image = stod(numberI);
      }
      else
      {
        b->real = stod(numberR);
        b->image = stod(numberI);
      }
    }
    else
    {
      numberR = textline.substr(0, textline.find("-",1));
      numberI = textline.substr(textline.find("-",1), textline.find("i")-textline.find("-"));
      if (count == 0)
      {
        a->real = stod(numberR);
        a->image = stod(numberI);
      }
      else
      {
        b->real = stod(numberR);
        b->image = stod(numberI);
      }

    }
    count++;
  }
}

inline Cplex ComplexOperation(Cplex *a, Cplex *b, char operation)
{
  Cplex result;
  if (operation == '+')
  {
    result.real = a->real + b->real;
    result.image = a->image + b->image;
  }
  else if (operation == '-')
  {
    result.real = a->real - b->real;
    result.image = a->image - b->image;
  }
  else if (operation == '*')
  {
    result.real = (a->real * b->real) - (a->image * b->image);
    result.image = (a->real * b->image) + (a->image * b->real);
  }
  else if (operation == '/')
  {
    result.real = ((a->real * b->real) + (a->image * b->image)) / ((b->real * b->real) + (b->image * b->image));
    result.image = ((a->image * b->real) - (a->real * b->image)) / ((b->real * b->real) + (b->image * b->image));
  }

  return result;
}

inline void PrintComplex(char *file, Cplex *results)
{
  fstream myfile(file, ios::out);
  string textline;
  if (myfile.fail())
  {
    cout << "Can not creat " << file << "!!" << endl;
    exit(1);
  }
  cout << "Write output in " << file << " file.";
  for (int i = 0; i<4; i++)
  {
    myfile << fixed << setprecision(3) << results[i].real;
    if (results[i].image < 0)
      myfile << results[i].image << "i" << endl;
    else
      myfile << "+" << results[i].image << "i" << endl;
  }
}

int main(int argc, char *argv[])
{
  if (argc!=3)
  {
    cout << "Usage: ./ex1-1 input_filename output_filename" << endl;
    return 1;
  }
  Cplex a, b; // use struct named Cplex under namespace Complex
  ReadTextFile(argv[1], &a, &b); // process text file
  cout << "From showComplex: " << endl;
  showComplex(a);
  showComplex(b);
  Cplex results[4]; // store the results of diff. operation
  results[0] = ComplexOperation(&a, &b, '+');
  results[1] = ComplexOperation(&a, &b, '-');
  results[2] = ComplexOperation(&a, &b, '*');
  results[3] = ComplexOperation(&a, &b, '/');

  PrintComplex(argv[2], results); // print the results on file.
  return 0;
}
