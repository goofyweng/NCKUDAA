//ex8-1.cpp
//type includes student id, gender, age,
//and the amount of cash a student owns.

#include <iostream>
#include <cstring>
using namespace std;

struct student{
  long id;
  char gender;
  int age;
  int money;
};

void ShowData(const student& );
student SetStudent();
void Caculate(const student&, const student&, const student&, const student&, const student&);
int main()
{
  student a = {9413599, 'M', 25, 10001};
  student b = {9513622, 'M', 22, 500};
  student c = {9613812, 'F', 20, 30};
  student d = {9713964, 'F', 18, 66000};
  student e = {0, 0, 0, 0};
  e = SetStudent();
  ShowData(a);
  ShowData(b);
  ShowData(c);
  ShowData(d);
  ShowData(e);
  Caculate(a, b, c, d, e);
  return 0;
}

//"Youth" ==> age of one student is < 21
//"Adult" ==> the student is >= 21 years old.
// "Rich" ==> money is >=$10000
//"poor" ==> money is < $10000
student SetStudent()
{
  student s;
  cout << "Please enter your student id: ";
  cin >> s.id;
  cout << "Gender (M/F): ";
  cin >> s.gender;
  cout << "Age: ";
  cin >> s.age;
  cout << "The amount of money in your own: ";
  cin >> s.money;
  return s;
}

void ShowData(const student& a)
{
  char AorY[10];
  char RorP[10];
  char MorF[10];

  if (a.age < 21)
    strcpy(AorY, "youth");
  else
    strcpy(AorY, "adult");

  if (a.money >= 10000)
    strcpy(RorP, "rich");
  else
    strcpy(RorP, "poor");

  if (a.gender == 'M')
    strcpy(MorF, "Male");
  else
    strcpy(MorF, "Female");

  cout << "id " << a.id << " is a " << AorY
    << " & " << RorP << " " << MorF << "!" << endl;
}

void Caculate(const student& a, const student& b, const student& c, const student& d, const student& e)
{
  float AvAge;
  int TotMon;
  AvAge = float(a.age + b.age + c.age + d.age + e.age)/5;
  TotMon = (a.money + b.money + c.money + d.money + e.money);
  cout << "This group is " << AvAge << " years old in average." << endl;
  cout << "This group has $" << TotMon << " now." << endl;
}
