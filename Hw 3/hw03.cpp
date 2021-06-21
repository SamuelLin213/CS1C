#include "functions.h"
using namespace std;

/************************************
 * Hw03 -Class constructor,
 * Inheritance & Init
 * ----------------------------------
 * Date class contains month, day
 * and year. Employee class stores
 * relevant information for each
 * employee. Classes programmer
 * and softwareArchitect are derived
 * from employee, with additional
 * private data members in each class.
 * ----------------------------------
 * INPUT:
 *    <none>
 * OUPUT:
 *    1 - Before and after of employee
 *        object created using the
 *        default parameter
 *    2 - Before and after of employee
 *        object created using the
 *        non-default parameter
 *    3 - Before and after of programmer
 *        object created using the
 *        default parameter
 *    4 - Before and after of programmer
 *        object created using the
 *        non-default parameter
 *    5 - Before and after of software
 *        architect object created using
 *        the default parameter
 *    6 - Before and after of software
 *        architect object created using
 *        the non-default parameter
 ************************************/

int main()
{
  //Employee class testing - default
  employee emply1("", 0, "", 0, '\0', "",
  "", 0, 0, 0);
  cout << "Initial Employee using default constructor:" << endl;
  emply1.printInfo();

  cout << endl << "Final Employee using default constructor:" << endl;
  emply1.setName("James Corden");
  emply1.setId(87654);
  emply1.setPhone("703-703-1234");
  emply1.setAge(37);
  emply1.setTitle("Talk Show Host");
  emply1.setSalary("$900,000");
  emply1.setDate(12, 25, 2014);

  emply1.printInfo();

  cout << endl;

  //Employee class testing - non default
  employee emply2("Jimmy Fallon", 12345, "949-555-1234", 40, 'M', "Comedian",
  "$100,000", 8, 31, 2014);
  cout << "Initial Employee using non-default constructor:" << endl;
  emply2.printInfo();

  cout << endl << "Final Employee using non-default constructor:" << endl;
  emply2.setName("Stephan Colbert");
  emply2.setId(67890);
  emply2.setPhone("310-555-5555");
  emply2.setAge(51);
  emply2.setTitle("Talk Show Host");
  emply2.setSalary("$70,123");
  emply2.setDate(5, 8, 2015);

  emply2.printInfo();

  cout << endl;

  //Programmer class testing - default
  programmer prgmr1("", 0, "", 0, '\0', "", "", 0, 0, 0, 0, "", 0, false, false);
  cout << "Initial Programmer using default constructor:" << endl;
  prgmr1.printInfo();

  cout << endl << "Final Programmer using default constructor: " << endl;
  prgmr1.setName("Harold Hardware");
  prgmr1.setId(24680);
  prgmr1.setPhone("123-456-7890");
  prgmr1.setAge(27);
  prgmr1.setTitle("Programmer");
  prgmr1.setSalary("$250,000");
  prgmr1.setDate(6, 15, 2010);
  prgmr1.setDepart(7654321);
  prgmr1.setSupervisor("Joe Boss");
  prgmr1.setPercent(5);
  prgmr1.setCpp(false);
  prgmr1.setJava(true);

  prgmr1.printInfo();
  cout << endl;

  //Programmer class testing - non-default
  programmer prgmr2("Mary Coder", 65432, "310-555-5555", 28, 'F', "Programmer",
  "$770,123", 2, 8, 2010, 6543222, "Mary Leader", 7, true, true);
  cout << "Initial Programmer using non-default constructor:" << endl;
  prgmr2.printInfo();

  cout << endl << "Final Programmer using non-default constructor: " << endl;
  prgmr2.setName("Sam Software");
  prgmr2.setId(54321);
  prgmr2.setPhone("819-123-4567");
  prgmr2.setAge(21);
  prgmr2.setTitle("Programmer");
  prgmr2.setSalary("$223,000");
  prgmr2.setDate(12, 24, 2011);
  prgmr2.setDepart(5432122);
  prgmr2.setSupervisor("Joe Boss");
  prgmr2.setPercent(4);
  prgmr2.setCpp(true);
  prgmr2.setJava(false);

  prgmr2.printInfo();
  cout << endl;

  //Software Architect class testing - default
  softwareArchitect swA1("", 0, "", 0, '\0', "",
  "", 0, 0, 0, 0, "", 0, 0);
  cout << "Initial Programmer using default constructor:" << endl;
  swA1.printInfo();

  cout << endl << "Final Programmer using default constructor:" << endl;
  swA1.setName("Sally Designer");
  swA1.setId(34343);
  swA1.setPhone("987-654-3210");
  swA1.setAge(35);
  swA1.setTitle("Architect");
  swA1.setSalary("$500,234");
  swA1.setDate(3, 5, 2004);
  swA1.setDepart(1357931);
  swA1.setSupervisor("Big Boss");
  swA1.setPercent(7);
  swA1.setYrs(5);

  swA1.printInfo();
  cout << endl;

  //Software Architect class testing - non-default
  softwareArchitect swA2("Alex Arch", 88888, "819-123-4444", 31, 'M', "New Architect",
  "323,000", 12, 24, 2009, 5434222, "Big Boss", 5, 4);
  cout << "Initial Programmer using non-default constructor:" << endl;
  swA2.printInfo();

  cout << endl << "Final Programmer using non-default constructor:" << endl;
  swA2.setName("Sally Designer");
  swA2.setId(87878);
  swA2.setPhone("310-555-8888");
  swA2.setAge(38);
  swA2.setTitle("Architect");
  swA2.setSalary("$870,123");
  swA2.setDate(2, 8, 2003);
  swA2.setDepart(6543422);
  swA2.setSupervisor("Big Boss");
  swA2.setPercent(8);
  swA2.setYrs(11);

  swA2.printInfo();
  cout << endl;

  return 0;
}
