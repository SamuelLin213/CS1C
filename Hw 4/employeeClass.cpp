#include "functions.h"
using namespace std;

class employee;

//default contructor
employee::employee()
{
  employee("", 0, "", 0, '\0', "", "", 0, 0, 0);
}
//non-default constructor - takes all necessary parameters for an employee
employee::employee(string name_, int id_, string phone_, int age_, char gender_,
   string title_, string salary_, int month_, int day_, int year_)
  :name{name_}, id{id_}, phone{phone_}, age{age_}, gender{gender_},
  title{title_}, salary{salary_}, hire(month_, day_, year_)
{
}
//changes/sets the name variable
void employee::setName(string name_)
{
  name = name_;
}
//changes/sets the id variable
void employee::setId(int id_)
{
  id = id_;
}
//changes/sets the phone variable
void employee::setPhone(string phone_)
{
  phone = phone_;
}
//changes/sets the age variable
void employee::setAge(int age_)
{
  age = age_;
}
//changes/sets the title variable
void employee::setTitle(string title_)
{
  title = title_;
}
//changes/sets the salary variable
void employee::setSalary(string salary_)
{
  salary = salary_;
}
//changes/sets the date variable
void employee::setDate(int month_, int day_, int year_)
{
  hire = date(month_, day_, year_);
}
//prints out the corresponding info for the employee object
void employee::printInfo()
{
  cout << left << setw(20) << "Name" << setw(6) << "Id" << setw(13) << "Phone"
  << setw(4) << "Age" << setw(7) << "Gender" << setw(15) << "Job Title" <<
  setw(9) << "Salary" << setw(10) << "Hire date" << endl;

  cout << left << setw(20) << name << setw(6) << id << setw(13) << phone
  << setw(4) << age << setw(7) << gender << setw(15) << title <<
  setw(9) << salary << hire << endl;
}
//returns the name variable
string employee::getName()
{
  return name;
}
//friend function that checks equality
void isEqualPhone(employee& ths, employee& other)
{
  if(ths.phone == other.phone)
  {
    cout << "Employees' phones are equal!" << endl;
    return;
  }
  cout << "Employees' phones are NOT equal!" << endl;
}
//overloaded == operator
bool operator==(employee& ths, employee& other)
{
  if(ths.phone == other.phone)
  {
    return true;
  }
  return false;
}
//member function that adds int to age
void employee::addAge(int num)
{
  age+=num;
  cout << num << " years added to " << name << "'s age." << endl;
}
//overloaded + operator
employee& employee::operator+(int num)
{
  age += num;

  cout << num << " years added to " << name << "'s age." << endl;

  return *this;
}
//overloaded << operator
ostream& operator<<(ostream& os, const employee& obj)
{
  os << left << setw(20) << "Name" << setw(6) << "Id" << setw(13) << "Phone"
  << setw(4) << "Age" << setw(7) << "Gender" << setw(15) << "Job Title" <<
  setw(9) << "Salary" << setw(10) << "Hire date" << endl;

  os << left << setw(20) << obj.name << setw(6) << obj.id << setw(13) << obj.phone
  << setw(4) << obj.age << setw(7) << obj.gender << setw(15) << obj.title <<
  setw(9) << obj.salary << obj.hire << endl;

  return os;
}
//overloaded >> operator
istream& operator>>(istream& iStream, employee& obj)
{
  int month_;
  int day_;
  int year_;

  getline(iStream, obj.name);
  iStream >> obj.id;
  iStream.ignore();
  getline(iStream, obj.phone);
  iStream >> obj.age >> obj.gender;
  iStream.ignore();
  getline(iStream, obj.title);
  getline(iStream, obj.salary);
  iStream >> month_ >> day_ >> year_;
  obj.hire = date(month_, day_, year_);

  return iStream;
}
//overloaded pre-increment operator
employee& employee::operator++()
{
  ++age;

  return *this;
}
//overloaded post-increment operator
const employee employee::operator++(int)
{
  employee temp = *this;

  age++;

  return temp;
}
