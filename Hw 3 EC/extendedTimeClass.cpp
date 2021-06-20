#include "functions.h"
using namespace std;

class ExtendedTime;

ExtendedTime::ExtendedTime()
  :Time(0, 0, 0)
{
}
ExtendedTime::ExtendedTime(int hrs, int min, int sec, TimeZone zn)
  :Time(hrs, min, sec)
{
  zone = zn;
}

ostream& operator<<(ostream& o, const ExtendedTime& eT)
{
    o << Time(eT);
    o << " ";
    string zn = "";
    switch(eT.zone)
    {
      case PACIFIC:
        zn = "Pacific";
        break;
      case MOUNTAIN:
        zn = "Mountain";
        break;
      case CENTRAL:
        zn = "Central";
        break;
      case EASTERN:
        zn = "Eastern";
        break;
    }

    return (o << zn);
}
