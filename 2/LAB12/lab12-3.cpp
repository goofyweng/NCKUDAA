// file: lab12-3.cpp
#include <iostream>
#include <string>
using namespace std;
typedef struct{
  long id;
  string name;
  int age;
  char gender;
} student;

void DisplayStudent(const student &);
student AssignStudent(long, string, int, char);

int main()
{
  student uee_a = AssignStudent(9823014,"Tommy",20,'F');
  student uee_b = AssignStudent(9823183,"Marry",21,'M');
  DisplayStudent(uee_a);
  DisplayStudent(uee_b);
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
