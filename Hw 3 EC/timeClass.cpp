#include "functions.h"
using namespace std;

class Time;

Time::Time()
{
  Time(0, 0, 0);
}
Time::Time(int hrs, int min, int sec)
  :hours{hrs}, minutes{min}, seconds{sec}
{
}
ostream& operator<<(ostream& o, const Time& t)
{
  return (o << t.hours << ":" << t.minutes << ":" << t.seconds);
}
