#include "functions.h"
using namespace std;

class softwareArchitect;

softwareArchitect::softwareArchitect()
  :softwareArchitect("", 0, "", 0, '\0', "", "", 0, 0, 0, 0, "", 0, 0)
{
}
softwareArchitect::softwareArchitect(string name_, int id_, string phone_, int age_,
  char gender_, string title_, string salary_, int month_, int day_, int year_,
int department_, string supervisor_, int percent_, int years_)
  :employee(name_, id_, phone_, age_, gender_, title_, salary_, month_, day_,
  year_), department{department_}, supervisor{supervisor_}, percentInc{percent_},
  years{years_}
{
}
void softwareArchitect::printInfo()
{
  employee::printInfo();

  cout << left << setw(20) << "Name" << setw(11) << "Department" << setw(11)
  << "Supervisor" << setw(8) << "Raise %" << setw(5) << "Years" << endl;
  cout << left << setw(20) << getName() << setw(11) << department << setw(11)
  << supervisor << setw(8) << percentInc << setw(5) << years << endl;
}
void softwareArchitect::setDepart(int department_)
{
  department = department_;
}
void softwareArchitect::setSupervisor(string supervisor_)
{
  supervisor = supervisor_;
}
void softwareArchitect::setPercent(int percent_)
{
  percentInc = percent_;
}
void softwareArchitect::setYrs(int years_)
{
  years = years_;
}
