#include "functions.h"
using namespace std;

/**********************************************
* Name : Samuel Lin
* Date: June 22, 2021
* Class: CS1C, Summer Session 2021
* Assignment: Hw04
* Summary:
*   -Employee class contains all necessary
*    information for each employee, and
*    is a composition of date class, which
*    stores the month, day and year.
*   -Member functions addAge() and isEqualPhone()
*    are created to test equality and add to
*    an employee object's phone number
*   -The ==, +, >> and << operators are overloaded
*    and tested on employee objects
*   -Lastly, the post and pre-increment are
*    overloaded and tested 
**********************************************/

/************************************
 * Hw04 - Friend functions &
 * operator overloading
 * ----------------------------------
 * Employee class from hw03 is improved
 * with more functions and overloaded
 * operators.
 * ----------------------------------
 * INPUT:
 *    <none>
 * OUPUT:
 *    1 - Friend function isEqualPhone()
 *        changes if phone numbers of
 *        two objects are equal
 *    2 - == operator is overloaded
 *        and tested
 *    3 - Friend function addAge()
 *        adds an int to age
 *    4 - + operator is overloaded
 *        and tested
 *    5 - pre and post increment
 *        operators overloaded and
 *        tested
 ************************************/

int main()
{
  //initializes employee object
  employee emply("Jimmy Fallon", 12345, "949-555-1234", 40, 'M', "Comedian",
  "$100,000", 8, 31, 2014);
  employee emplyExtra = emply; //sets initial object to temp object
  emplyExtra.setPhone("123-456-789"); //changes phone number of initial object

  //Before changing phone number
  cout << "Using friend function: " << endl;
  isEqualPhone(emply, emplyExtra); //tests equality using isEqualPhone() function
  cout << "Using overloaded operator:" << endl;
  if(emply == emplyExtra) //tests equality using the overloaded == operator
  {
    cout << "Phones are equal!" << endl;
  }
  else
    cout << "Phones are NOT equal!" << endl;


  emplyExtra.setPhone("949-555-1234"); //changes phone back to same value

  //After changing phone number
  cout << endl << "Using friend function: " << endl;
  isEqualPhone(emply, emplyExtra); //tests equality with isEqualPhone() function
  cout << "Using overloaded operator:" << endl;
  if(emply == emplyExtra) //tests equality with the overloaded == operator
  {
    cout << "Phones are equal!" << endl;
  }
  else
    cout << "Phones are NOT equal!" << endl;

  //Addition member function
  cout << endl;
  emply.addAge(3); //member function addAge() adds an int to age
  emply = emply + 2; //overloaded + operator adds int to age

  //Uses overloaded >> and << to input and output employee object
  cout << endl;
  cout << "Inserting into employee object:" << endl;
  cout << "Please enter name(string), id(int), phone number(string), age(int), gender(char), ";
  cout <<  "title(string), salary(string) and date of hire(int int int):" << endl;
  cin >> emply; //overloaded >> to input into each member variable
  cout << emply; //overloaded << to output each member variable

  //Extra credit: pre and post increment operators
  cout << endl;
  cout << "Using pre-increment" << endl;
  cout << ++emply; //tests overloaded pre-increment
  cout << "Using post-increment" << endl;
  cout << emply++; //tests overloaded post-increment
  cout << "Final values:" << endl;
  cout << emply; //checks that post-increment operator worked

  return 0;
}
