#ifndef EXCEPTIONEMPTY_H
#define EXCEPTIONEMPTY_H

#include <assert.h>
#include <iostream>
#include <iomanip>
#include <exception>
using namespace std;

class ExceptionQueueIsEmpty: public std::exception
{
  public:
    //what() function
    //returns message string
    // pre-condition:
    //  <none>
    // post-condition:
    //  -string stored in message is returned
    virtual const char* what() const noexcept { return message.c_str();}
  private:
    string message { "Error: can't remove from empty queue."}; //stores exception message
};

#endif
