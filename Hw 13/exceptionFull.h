#ifndef EXCEPTIONFULL_H
#define EXCEPTIONFULL_H

#include <assert.h>
#include <iostream>
#include <iomanip>
using namespace std;

class ExceptionQueueIsFull: public exception
{
  public:
    ExceptionQueueIsFull();
    string what();
  private:
    string message;
};

#endif
