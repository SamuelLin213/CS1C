#include "functions.h"
using namespace std;

class date;

//default contructor
date::date()
{
  date(0, 0, 0);
}
//non-default constructor - takes 3 int parameters
date::date(int mth, int dy, int yr)
  :month{mth}, day{dy}, year{yr}
{
}
//overloaded << operator, prints out in mm/dd/yyyy format
ostream& operator<<(ostream& o, const date& dt)
{
  return (o << dt.month << "/" << dt.day << "/" << dt.year);
}
