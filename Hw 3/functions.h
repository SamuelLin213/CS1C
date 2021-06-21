#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class date
{
  friend ostream& operator<<(ostream& o, const date& dt);

  public:
    date();
    date(int, int, int);
  private:
    int month;
    int day;
    int year;
};

class employee
{
  public:
    employee();
    employee(string, int, string, int, char, string, string, int, int, int);
    void printInfo();
    void setName(string);
    void setId(int);
    void setPhone(string);
    void setAge(int);
    void setTitle(string);
    void setSalary(string);
    void setDate(int, int, int);
    string getName();
  private:
    string name;
    int id;
    string phone;
    int age;
    char gender;
    string title;
    string salary;
    date hire;
};

class programmer : public employee
{
  public:
    programmer();
    programmer(string, int, string, int, char, string, string, int, int, int,
    int, string, int, bool, bool);
    void setDepart(int);
    void setSupervisor(string);
    void setPercent(int);
    void setCpp(bool);
    void setJava(bool);
    void printInfo();
  private:
    int department;
    string supervisor;
    int percentInc;
    bool cpp;
    bool java;
};

class softwareArchitect : public employee
{
  public:
    softwareArchitect();
    softwareArchitect(string, int, string, int, char, string, string, int, int,
      int, int, string, int, int);
    void printInfo();
    void setDepart(int);
    void setSupervisor(string);
    void setPercent(int);
    void setYrs(int);
  private:
    int department;
    string supervisor;
    int percentInc;
    int years;
};

#endif
