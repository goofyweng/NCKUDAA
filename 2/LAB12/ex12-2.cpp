//ex12-2.cpp
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <typeinfo>
using namespace std;
typedef struct{
  long id;
  string name;
  int age;
  char gender;
} student;

void DisplayStudent(const student &);
void OutputStudentResult(const student *, const int , const string);
student AssignStudent(long, string,int,char);
string *removeDupWord(string);

int main(int argc, char *argv[])
{
  if (argc!=3 && argc!=5)
  {
    cout << "Usage: ./ex12-2 [-i] input_filename [-o] output_filename" << endl;
    return 1;
  }
  else if (argc==3)
  {
    if (strcmp(argv[1],"-i")==0)
    {
      fstream out(argv[2], ios::in);
      string textline;
      string *info = new string[4];
      int count = 0;
      int studentNum;
      if (out.fail())
      {
        cout << "File " << argv[2] << " does not exist!!" << endl;
        return 1;
      }
      out >> studentNum;
      //cout << "Student Num: " << studentNum << endl;
      out.ignore(2,'\n'); //to read from the second line in the file ex12-2-in.txt

      student *uee1302 = new student[studentNum];
      while (getline(out,textline,'\n'))
      {
        info = removeDupWord(textline);
        long id = stol(info[1]);
        int age = stoi(info[2]);
        char gender;
        strcpy(&gender, info[3].c_str());

        uee1302[count] = AssignStudent(id,info[0],age,gender);
        count++;
      }
      OutputStudentResult(uee1302, count, "test.txt");

    }
    else if (strcmp(argv[1],"-o")==0)
    {
      cout << "Input file is required." << endl;
      return 1;
    }
  }
  else if (argc==5)
  {
    if (strcmp(argv[1],"-i")==0 && strcmp(argv[3],"-o")==0)
    {
      fstream out(argv[2], ios::in);
      string textline;
      string *info = new string[4];
      int count = 0;
      int studentNum;
      if (out.fail())
      {
        cout << "File " << argv[2] << " does not exist!!" << endl;
        return 1;
      }
      out >> studentNum;
      //cout << "Student Num: " << studentNum << endl;
      out.ignore(2,'\n'); //to read from the second line in the file ex12-2-in.txt

      student *uee1302 = new student[studentNum];
      while (getline(out,textline,'\n'))
      {
        info = removeDupWord(textline);
        long id = stol(info[1]);
        int age = stoi(info[2]);
        char gender;
        strcpy(&gender, info[3].c_str());

        uee1302[count] = AssignStudent(id,info[0],age,gender);
        count++;
      }
      OutputStudentResult(uee1302, count, argv[4]);
    }
    else if (strcmp(argv[1],"-o")==0 && strcmp(argv[3],"-i")==0)
    {
      fstream out(argv[4], ios::in);
      string textline;
      string *info = new string[4];
      int count = 0;
      int studentNum;
      if (out.fail())
      {
        cout << "File " << argv[4] << " does not exist!!" << endl;
        return 1;
      }
      out >> studentNum;
      //cout << "Student Num: " << studentNum << endl;
      out.ignore(2,'\n'); //to read from the second line in the file ex12-2-in.txt

      student *uee1302 = new student[studentNum];
      while (getline(out,textline,'\n'))
      {
        info = removeDupWord(textline);
        long id = stol(info[1]);
        int age = stoi(info[2]);
        char gender;
        strcpy(&gender, info[3].c_str());

        uee1302[count] = AssignStudent(id,info[0],age,gender);
        count++;
      }
      OutputStudentResult(uee1302, count, argv[2]);
    }
  }

  return 0;
}

student AssignStudent(long id, string name, int age, char gender)
{
  student member;
  member.id = id;
  member.name = name;
  member.age = age;
  member.gender = gender;
  return member;
}
void DisplayStudent(const student &member)
{
  cout << "name: " << member.name << endl;
  cout << "id: " << member.id << endl;
  cout << "age: " << member.age << endl;
  cout << "gender: " << member.gender << endl;
}
void OutputStudentResult(const student *member, const int studentNum, const string filename)
{
  ofstream myfile;
  myfile.open(filename,ios::out);
  cout << "Write output in " << filename << " file.";
  double totalAge = 0;
  int numofM = 0; int numofFm = 0;
  //cout << "They are: ";
  myfile << "They are: ";
  for (int idx = 0; idx < studentNum; idx++)
  {
    if (idx==studentNum-2)
    {
      //cout << member[idx].name << " and ";
      myfile << member[idx].name << " and ";
    }
    else
    {
      //cout << member[idx].name << ", ";
      myfile << member[idx].name << ", ";
    }
    totalAge += member[idx].age;
    if (member[idx].gender=='M') numofM++;
    else if (member[idx].gender=='F') numofFm++;
  }
  //cout << endl;
  myfile << endl;

  //cout << "Their average age is " << totalAge/studentNum << " years old." << endl;
  myfile << "Their average age is " << totalAge/studentNum << " years old." << endl;
  //cout << "They are " << numofM << " boys and " << numofFm << " girls.";
  myfile << "They are " << numofM << " boys and " << numofFm << " girls.";
}

string *removeDupWord(string str)
{
    string word = "";
    string *wordOut = new string[4];
    int idx = 0;
    for (auto x : str)
    {
        if (x == ' ')
        {
            //cout << word << endl;
            wordOut[idx] = word;
            word = "";
            idx++;
        }
        else {
            word = word + x;
        }
    }
    //cout << word << endl;
    wordOut[idx] = word;
    return wordOut;
}
