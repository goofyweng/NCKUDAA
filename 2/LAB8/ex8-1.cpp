//ex8-1.cpp
//type includes student id, gender, age,
//and the amount of cash a student owns.
//"Youth" ==> age of one student is < 21
//"Adult" ==> the student is >= 21 years old.
// "Rich" ==> money is >=$10000
//"poor" ==> money is < $10000
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
int main()
{
  student a = {9413599, 'M', 25, 10001};
  student b = {9513622, 'M', 22, 500};
  student c = {9613812, 'F', 20, 30};
  student d = {9713964, 'F', 18, 66000};
  ShowData(a);
  return 0;
}

void ShowData(const student& a)
{
  if (a.age >= 21)
    {char AorY[6] = "Adult";
    cout << AorY;}
  else
    char AorY[6] = "Youth";

  // cout << "id " << a.id << " is a " << AorY[6]
  //   << " & " << a.money << " " << a.gender << "!" << endl;
}
