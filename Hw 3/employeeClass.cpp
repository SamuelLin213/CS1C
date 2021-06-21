#include "functions.h"
using namespace std;

class employee;

employee::employee()
{
  employee("", 0, "", 0, '\0', "", "", 0, 0, 0);
}
employee::employee(string name_, int id_, string phone_, int age_, char gender_,
   string title_, string salary_, int month_, int day_, int year_)
  :name{name_}, id{id_}, phone{phone_}, age{age_}, gender{gender_},
  title{title_}, salary{salary_}, hire(month_, day_, year_)
{
}
void employee::setName(string name_)
{
  name = name_;
}
void employee::setId(int id_)
{
  id = id_;
}
void employee::setPhone(string phone_)
{
  phone = phone_;
}
void employee::setAge(int age_)
{
  age = age_;
}
void employee::setTitle(string title_)
{
  title = title_;
}
void employee::setSalary(string salary_)
{
  salary = salary_;
}
void employee::setDate(int month_, int day_, int year_)
{
  hire = date(month_, day_, year_);
}
void employee::printInfo()
{
  cout << left << setw(20) << "Name" << setw(6) << "Id" << setw(13) << "Phone"
  << setw(4) << "Age" << setw(7) << "Gender" << setw(15) << "Job Title" <<
  setw(9) << "Salary" << setw(10) << "Hire date" << endl;

  cout << left << setw(20) << name << setw(6) << id << setw(13) << phone
  << setw(4) << age << setw(7) << gender << setw(15) << title <<
  setw(9) << salary << hire << endl;
}
string employee::getName()
{
  return name;
}
