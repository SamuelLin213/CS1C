#ifndef QUEUETYPE_H
#define QUEUETYPE_H

#include <iostream>
#include <iomanip>
using namespace std;

template <class Type>
class queueType
{
  public:
    //isEmptyQueue() function
    //checks if queue is empty
    //  pre-condition:
    //    <none>
    //  post-condition:
    //    -returns bool value
    virtual bool isEmptyQueue() const = 0;

    //isFullQueue() function
    //checks if queue is full
    //  pre-condition:
    //    <none>
    //  post-condition:
    //    -returns bool value
    virtual bool isFullQueue() const = 0;

    //initializeQueue() function
    //creates queue with empty state
    // pre-condition:
    //    <none>
    // post-condition:
    //    -queue is created w/ empty state
    virtual void initializeQueue() = 0;

    //front() function
    //returns front of the queue
    // pre-condition:
    //    queue initilized and not empty
    // post-condition:
    //    -first element of the queue returned
    virtual Type front() const = 0;

    //back() function
    //returns back of the queue
    // pre-condition:
    //    queue initialized and not empty
    // post-condition:
    //    -last element of the queue returned
    virtual Type back() const = 0;

    //enqueue() function
    //adds element to rear of queue
    // pre-condition
    //    -queue initialized and not full
    // post-condition
    //    -element is added to the queue
    virtual void enqueue(const Type& element) = 0;

    //dequeue() function
    //removes element from front of queue
    // pre-condition
    //    -queue initialized and not empty
    // post-condition
    //    -element is removed from queue and returned
    virtual Type dequeue() = 0;

    //size() function
    //returns the number of elements stored
    // pre-condition:
    //    <none>
    // post-condition:
    //    -returns count
    virtual int size() = 0;
};

#endif
