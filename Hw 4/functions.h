#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class date
{
  //friend function << overloader
  //overloads the << operator to output in dd/mm/yyyy format
  //  pre-condition:
  //    output stream object defined and passed in
  //    date object defined and passed in
  //  post-condition:
  //    member varibles are outputted in dd/mm/yyyy format
  friend ostream& operator<<(ostream& o, const date& dt);

  public:

    //default contructor
    //creates default instance of class
    //  pre-condition:
    //    <none>
    //  post-condition:
    //    All member variables are set to default values
    date();

    //non-default constructor
    //creates non-default instance of class
    //  pre-condition:
    //    respective parameters are defined and passed in
    //  post-condition:
    //    All member variables are set using the parameters
    date(int, int, int);
  private:
    int month; //stores int that represents the month
    int day; //stores int that represents the day
    int year; //stores int that represents the year
};

class employee
{
  //Friend function that tests equality
  //checks if phone numbers of two objects are equal
  //  pre-condition:
  //    two employee classes defined and passed in
  //  post-condition:
  //    outputs whether phone numbers are equal
  friend void isEqualPhone(employee& ths, employee& other);

  //Overloaded == operator
  //overloads == to check if employee phones are equal
  //  pre-condition:
  //    two employee classes defined and passed in
  //  post-condition:
  //    returns bool value on whether phone numbers are equal
  friend bool operator==(employee& ths, employee& other);

  //Overloaded << operator
  //Outputs all member variables of employee
  //  pre-condition:
  //    output stream object defined and passed in
  //    employee object defined and passed in
  //  post-condition:
  //    all member variables outputted
  friend ostream& operator<<(ostream&, const employee&);

  //Overloaded >> operator
  //Allows input into all member varaibles
  //  pre-condition:
  //    input stream object defined and passed in
  //    employee object defined and passed in
  //  post-condition:
  //    input values stored into member variables
  friend istream& operator>>(istream&, employee&);

  public:

    //default constructor
    //creates default instance of class
    //  pre-condition:
    //    <none>
    //  post-condition:
    //    all member variables set to default values
    employee();

    //non-default constructor
    //creates non-default instance of class
    //  pre-condition:
    //    respective parameters are defined and passed in
    //  post-condition:
    //    All member variables are set using the parameters
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
    void addAge(int);
    employee& operator+(int num);
    employee& operator++();
    const employee operator++(int);

  private:
    string name; //name of employee
    int id; //employee id number
    string phone; //phone number of employee
    int age; //age of employee
    char gender; //gender of employee
    string title; //job title of employee
    string salary; //salary of employee
    date hire; //date of hire of employee, composition of class date
};

#endif
