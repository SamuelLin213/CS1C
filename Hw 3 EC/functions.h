#ifndef TIMECLASS_H
#define TIMECLASS_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

typedef enum {PACIFIC, MOUNTAIN, CENTRAL, EASTERN} TimeZone;

class Time
{
  friend ostream& operator<<(ostream& o, const Time& t);

  public:
    Time();
    Time(int hrs, int min, int sec);
  private:
    int hours;
    int minutes;
    int seconds;
};

class ExtendedTime: public Time
{
  friend ostream& operator<<(ostream& o, const ExtendedTime& eT);

  public:
      ExtendedTime();
      ExtendedTime(int hrs, int min, int sec, TimeZone zn);
  private:
    TimeZone zone;
};

class Invoice
{
  friend void operator<<(ostream& o, const Invoice& iv);

  public:
    Invoice();
    Invoice(int hrs, int min, int sec);
  private:
    Time purchase_time;
};

#endif
