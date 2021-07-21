#ifndef QUEUEARR_H
#define QUEUEARR_H

#include <iostream>
#include <iomanip>
#include "queueType.h"
using namespace std;

template <class Type>
class queueArr: queueType<Type>
{
  public:
    //constructor
    //creates nondefault object of queueArr
    // pre-condition:
    //    -int var initialized and passed in
    // post-condition:
    //    -assigns parameter to maxSize
    //    -queue object created
    queueArr(int max)
      :maxSize{max}
    {
      list = make_unique<Type[]>(maxSize);
      qFront = 0;
      qBack = maxSize - 1;
      count = 0;
    }

    //constructor
    //creates default object of queueArr
    // pre-condition:
    //    <none>
    // post-condition:
    //    -creates default queue object
    queueArr()
    {
      qFront = 0;
      qBack = maxSize - 1;
      count = 0;
    }

    //copy constructor
    //copies other queue object into this queue
    // pre-condition:
    //    -queueArr object initialized and passed in
    // post-condition:
    //    -queue object elements copied into this queue
    //queueArr(const queueArr<Type>&);
    queueArr(const queueArr<Type>& other)
      :maxSize{other.maxSize}, count{other.count}, qFront{other.qFront}, qBack{other.qBack}
    {
      this->list = make_unique<Type[]>(maxSize);

      for(int x = 0; x < other.maxSize; x++)
      {
        list[x] = other.list[x];
      }
    }

    //destructor
    //destroys queue object
    // pre-condition:
    //    -queue object initilized
    // post-condition:
    //    -destroys queue object
    ~queueArr()
    {
    }

    //overloaded assignment operator
    //assigns queue elements into this queue
    // pre-condition:
    //    -queueArr object initialized and passed in
    // post-condition:
    //    -queue object elements stored into this queue
    //queueArr<Type>& operator=(const queueArr<Type>& other);
    queueArr<Type>& operator=(const queueArr<Type>& other)
    {
      unique_ptr<Type[]> temp(new Type[maxSize]);
      std::copy(other.list, other.list + other.maxSize, temp);

      list = temp;
      maxSize = other.maxSize;
      count = other.count;
      qFront = other.qFront;
      qBack = other.qBack;

      return *this;
    }

    //move constructor
    //moves data members of other into new object
    // pre-condition:
    //    -queueArr object initialized and passed in
    // post-condition:
    //    -queueArr data members moved into this object, other object emptied
    queueArr(queueArr&& other) noexcept
      :maxSize{other.maxSize}, count{other.count}, qFront{other.qFront}, qBack{other.qBack}, list{other.list}
    {
      other.maxSize = 0;
      other.count = 0;
      other.qFront = 0;
      other.qBack = 0;
      other.list = nullptr;
    }

    //move assignment
    //moves data members of other into existing object
    // pre-condition:
    //    -queueArr object initialied and passed in
    // post-condition:
    //    -returns pointer to the updated this object
    queueArr<Type>& operator=(queueArr&& other) noexcept
    {
      maxSize = other.maxSize;
      count = other.count;
      qFront = other.qFront;
      qBack = other.qBack;

      other.list = nullptr;
      other.maxSize = 0;
      other.count = 0;
      other.qFront = 0;
      other.qBack = 0;

      return *this;
    }

    //isEmptyQueue() function
    //checks if queue is empty
    //  pre-condition:
    //    <none>
    //  post-condition:
    //    -returns bool value
    bool isEmptyQueue() const { return (count == 0); }

    //isFullQueue() function
    //checks if queue is full
    //  pre-condition:
    //    <none>
    //  post-condition:
    //    -returns bool value
    bool isFullQueue() const { return (count == maxSize); }

    //initializeQueue() function
    //creates queue with empty state
    // pre-condition:
    //    <none>
    // post-condition:
    //    -queue is created w/ empty state
    void initializeQueue()
    {
      qFront = 0;
      qBack = maxSize - 1;
      count = 0;
    }

    //front() function
    //returns front of the queue
    // pre-condition:
    //    queue initilized and not empty
    // post-condition:
    //    -first element of the queue returned
    Type front() const
    {
      return list[qFront];
    }

    //back() function
    //returns back of the queue
    // pre-condition:
    //    queue initialized and not empty
    // post-condition:
    //    -last element of the queue returned
    Type back() const
    {
      return list[qBack];
    }

    //enqueue() function
    //adds element to rear of queue
    // pre-condition
    //    -queue initialized and not full
    // post-condition
    //    -element is added to the queue
    void enqueue(const Type& element)
    {
      if (!isFullQueue())
      {
        qBack = (qBack + 1) % maxSize;
        count++;
        list[qBack] = element;
      }
      else
        cout << "Error: can't add to full queue." << endl;
    }

    //dequeue() function
    //removes element from front of queue
    // pre-condition
    //    -queue initialized and not empty
    // post-condition
    //    -element is removed from queue and returned
    Type dequeue()
    {
      Type tempVar = Type();
      if (!isEmptyQueue())
      {
        Type temp = list[qFront];
        count--;
        qFront = (qFront + 1) % maxSize;
        return temp;
      }
      else
        cout << "Error: can't remove from empty queue." << endl;
        return tempVar; //creates default value of template Type
    }

    //size() function
    //returns the number of elements stored
    // pre-condition:
    //    <none>
    // post-condition:
    //    -returns count
    int size()
    {
      return count;
    }

    //print() function
    // outputs elements in queue
    // pre-condition:
    //    -queue initialized
    // post-condition:
    //    -elements outputted
    void print(queueArr<Type> temp)
    {
      while(!temp.isEmptyQueue())
      {
        cout << temp.front() << " ";
        temp.dequeue();
      }
      cout << endl;
    }

  private:
    int maxSize; //max queue size
    int count; //number of queue elements
    int qFront; //points to first element
    int qBack; //points to last element
    unique_ptr<Type[]> list; //pointer to array
};

#endif
