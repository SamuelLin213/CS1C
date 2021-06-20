#include "functions.h"
using namespace std;

/************************************
 * Hw03 ec - Base Init List,
 * Overloading & Friends
 * ----------------------------------
 * Class ExtendedTime is derived from
 * base class Time, which contains
 * hours, minutes and seconds.
 * Timezone is also stored in
 * ExtendedTime. Class Invoice
 * is a composition of Time,
 * The << operator is overloaded
 * for all 3 classes to allow
 * cout to output class members.
 * ----------------------------------
 * INPUT:
 *    <none>
 * OUPUT:
 *    1 - Original Deck
 *    2 - Deck perfectly shuffled once
 *    3 - Final deck - deck shuffled
 *        until original order
 *    4 - Number of shuffles printed
 ************************************/

int main()
{
  Time tm(1, 2, 3);
  cout << "Time class: ";
  cout << tm;
  cout << endl << endl;

  ExtendedTime etm(4, 5, 6, PACIFIC);
  cout << "Extended time class: ";
  cout << etm;
  cout << endl << endl;

  Invoice ivtm(7, 8, 9);
  cout << "Invoice class: ";
  cout << ivtm;
  cout << endl << endl;

  return 0;
}
