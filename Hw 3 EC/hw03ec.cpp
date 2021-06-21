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
 *    1 - ExtendedTime object created
 *    2 - ExtendedTime object printed
 *    3 - Invoice object created
 *    4 - Invoice object printed
 ************************************/

int main()
{
  ExtendedTime etm(1, 2, 3, PACIFIC);
  cout << "Extended time class: ";
  cout << etm;
  cout << endl << endl;

  Invoice ivtm(4, 5, 6);
  cout << "Invoice class: ";
  cout << ivtm;
  cout << endl << endl;

  return 0;
}
