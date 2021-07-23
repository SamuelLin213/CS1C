#include "exceptionFull.h"
using namespace std;

class ExceptionQueueIsFull;

ExceptionQueueIsFull::ExceptionQueueIsFull()
{
  message = "Queue is full: cannot add more elements.";
}
string ExceptionQueueIsFull::what()
{
  return message;
}
