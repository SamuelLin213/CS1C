#include "functions.h"
using namespace std;

class programmer;

programmer::programmer()
  :programmer("", 0, "", 0, '\0', "", "", 0, 0, 0, 0, "", 0, false, false)
{
}
programmer::programmer(string name_, int id_, string phone_, int age_,
  char gender_, string title_, string salary_, int month_, int day_, int year_,
int department_, string supervisor_, int percent_, bool cpp_, bool java_)
  :employee(name_, id_, phone_, age_, gender_, title_, salary_, month_, day_,
  year_), department{department_}, supervisor{supervisor_}, percentInc{percent_},
  cpp{cpp_}, java{java_}
{
}
void programmer::setDepart(int department_)
{
  department = department_;
}
void programmer::setSupervisor(string supervisor_)
{
  supervisor = supervisor_;
}
void programmer::setPercent(int percent_)
{
  percentInc = percent_;
}
void programmer::setCpp(bool cpp_)
{
  cpp = cpp_;
}
void programmer::setJava(bool java_)
{
  java = java_;
}
void programmer::printInfo()
{
  employee::printInfo();

  string cppStr = "";
  string javaStr = "";

  (cpp == true) ? (cppStr = "yes") : (cppStr = "no");
  (java == true) ? (javaStr = "yes") : (javaStr = "no");

  cout << left << setw(20) << "Name" << setw(11) << "Department" << setw(11)
  << "Supervisor" << setw(8) << "Raise %" << setw(11) << "Knows C++?" <<
  setw(10) << "Knows Java?" << endl;
  cout << left << setw(20) << getName() << setw(11) << department << setw(11)
  << supervisor << setw(8) << percentInc << setw(11) << cppStr <<
  setw(10) << javaStr << endl;
}
