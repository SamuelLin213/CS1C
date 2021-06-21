#include "functions.h"
using namespace std;

class date;

date::date()
{
  date(0, 0, 0);
}
date::date(int mth, int dy, int yr)
  :month{mth}, day{dy}, year{yr}
{
}
ostream& operator<<(ostream& o, const date& dt)
{
  return (o << dt.month << "/" << dt.day << "/" << dt.year);
}
