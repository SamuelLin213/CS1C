#include "functions.h"
using namespace std;

class Invoice;

Invoice::Invoice()
  :purchase_time(0, 0, 0)
{
}
Invoice::Invoice(int hrs, int min, int sec)
  :purchase_time(hrs, min, sec)
{
}
void operator<<(ostream& o, const Invoice& iv)
{
    o << Time(iv.purchase_time);
}
