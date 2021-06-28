#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/**********************************************
* Name : Samuel Lin
* Date: June 27, 2021
* Class: CS1C, Summer Session 2021
* Assignment: Hw06 - recursion
* Summary:
*	-Alphabet is stored in a string
* -reverse() function takes in 2 ints and string
*  (by reference) and reverses the characters
*  between the indexes
* -reverse() uses recursion to reverse the chars
* -Ec: reverseIt() uses iteration to reverse the chars
* INPUT:
*    <none>
* OUTPUT:
*   -Original string(alphabet)
*   -string after each call of reverse(); string is reset
*    after each call
*   -string after each call of reverseIt(); string is
*    reset after each call
**********************************************/


void reverse(int, int, string&);
void reverseIt(int, int, string&);

int main()
{
  // int ind1;
  // int ind2;
  string str = "abcdefghijklmnopqrstuvwxyz";

  cout << "String before:                " << str << endl;

  reverse(11, 18, str);
  cout << "String after calling 11, 18:  " << str << endl;
  str = "abcdefghijklmnopqrstuvwxyz";
  reverse(4, 22, str);
  cout << "String after calling 4, 22:   " << str << endl;
  str = "abcdefghijklmnopqrstuvwxyz";
  reverse(0, 25, str);
  cout << "String after calling 0, 23:   " << str << endl;

  cout << endl << "Using iteration:" << endl;

  str = "abcdefghijklmnopqrstuvwxyz";
  reverseIt(11, 18, str);
  cout << "String after calling 11, 18:  " << str << endl;
  str = "abcdefghijklmnopqrstuvwxyz";
  reverseIt(4, 22, str);
  cout << "String after calling 4, 22:   " << str << endl;
  str = "abcdefghijklmnopqrstuvwxyz";
  reverseIt(0, 25, str);
  cout << "String after calling 0, 23:   " << str << endl;

  return 0;
}

void reverse(int i1, int i2, string& str_) //passes string by reference
{

  if((i2 - i1) < 1) //base case, will stop recursion if difference is 0 or -1
  {
    return;
  }

  swap(str_[i1], str_[i2]); //switches values at indexes

  //recursion - calls itself, with first index moving up and second index moving down
  reverse(i1 + 1, i2 - 1, str_);
}

void reverseIt(int i1, int i2, string& str_)
{
  while(!((i2 - i1) < 1)) //keeps repeating "general case" until "base case" is reached
  {
    swap(str_[i1], str_[i2]); //same switch as above

    i1++; //moves up first index
    i2--; //moves down second index
  }
}
