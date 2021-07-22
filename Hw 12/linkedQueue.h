#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

#include "queueType.h"
using namespace std;

template <class Type>
struct nodeType
{
  Type info;
  nodeType<Type> *link;
};

template <class Type>
class linkedQueue: public queueType<Type>
{
  public:
    //overloaded assignment operator
    //assigns queue elements into this queue
    // pre-condition:
    //    -linkedQueue object initialized and passed in
    // post-condition:
    //    -queue object elements stored into this queue
    const linkedQueue<Type>& operator=(const linkedQueue<Type>& other)
    {
      swap(qFront, other.qFront);

      return *this;
    }

    //isEmptyQueue() function
    //checks if queue is empty
    //  pre-condition:
    //    <none>
    //  post-condition:
    //    -returns bool value
    bool isEmptyQueue() const { return (qFront == nullptr); }

    //isFullQueue() function
    //checks if queue is full
    //  pre-condition:
    //    <none>
    //  post-condition:
    //    -returns bool value
    bool isFullQueue() const { return false; }

    //initializeQueue() function
    //creates queue with empty state
    // pre-condition:
    //    <none>
    // post-condition:
    //    -queue is created w/ empty state
    void initializeQueue()
    {
      nodeType<Type> *temp; //creates temporary queue

      while (qFront!= nullptr) //loops through linked queue
      {
        temp = qFront;
        qFront = qFront->link;
        delete temp;
      }
      qBack = nullptr;
    }

    //front() function
    //returns front of the queue
    // pre-condition:
    //    queue initilized and not empty
    // post-condition:
    //    -first element of the queue returned
    Type front() const { return qFront->info; }

    //frontLink() function
    //returns first node of the queue
    // pre-condition:
    //    queue initilized and not empty
    // post-condition:
    //    -first node of the queue returned
    nodeType<Type>* frontLink() const { return qFront; }

    //back() function
    //returns back of the queue
    // pre-condition:
    //    queue initialized and not empty
    // post-condition:
    //    -last element of the queue returned
    Type back() const { return qBack->info; }

    //back() function
    //returns last node of the queue
    // pre-condition:
    //    queue initialized and not empty
    // post-condition:
    //    -last node of the queue returned
    nodeType<Type>* backLink() const { return qBack; }

    //enqueue() function
    //adds element to rear of queue
    // pre-condition
    //    -queue initialized and not full
    // post-condition
    //    -element is added to the queue
    void enqueue(const Type& element)
    {
        nodeType<Type> *newNode;
        newNode = new nodeType<Type>;
        newNode->info = element;
        newNode->link = nullptr;

        if (qFront == nullptr)
        {
          qFront = newNode;
          qBack = newNode;
        }
        else
        {
          qBack->link = newNode;
          qBack = qBack->link;
        }
    }

    //dequeue() function
    //removes element from front of queue
    // pre-condition
    //    -queue initialized and not empty
    // post-condition
    //    -element is removed from queue and returned
    Type dequeue()
    {
      nodeType<Type> *temp = nullptr;
      if (!isEmptyQueue())
      {
        temp = qFront;
        qFront = qFront->link;

        if (qFront == nullptr)
          qBack = nullptr;
        Type data = temp->info;
        delete temp;
        return data;
      }
      else
      {
        cout << "Cannot remove from an empty queue" << endl;
        delete temp;
        return Type();
      }
    }

    //constructor
    //creates default object of linkedQueue
    // pre-condition:
    //    <none>
    // post-condition:
    //    -queue object created
    linkedQueue()
    {
      qFront = nullptr;
      qBack = nullptr;
    }

    //copy constructor
    //copies other queue object into this queue
    // pre-condition:
    //    -linkedQueue object initialized and passed in
    // post-condition:
    //    -queue object elements copied into this queue
    linkedQueue(const linkedQueue<Type>& other)
    {
      nodeType<Type> node = other.qFront;
      while(node != nullptr)
      {
        enqueue(node->info);
        node = node->link;
      }
    }

    //destructor
    //destroys queue object
    // pre-condition:
    //    -queue object initilized
    // post-condition:
    //    -destroys queue object
    ~linkedQueue()
    {
        nodeType<Type>* temp;
        while(qFront != nullptr)
        {
          temp = qFront;
          qFront = qFront->link;
          delete temp;
        }
        qBack = nullptr;
    }

    //size() function
    //returns the number of elements stored
    // pre-condition:
    //    <none>
    // post-condition:
    //    -returns size of linkedQueue
    int size()
    {
      int count = 0;
      nodeType<Type>* temp = qFront;
      while(temp != nullptr)
      {
        count++;
        temp = temp->link;
      }
      return count;
    }

    //print() function
    // outputs elements in queue
    // pre-condition:
    //    -queue initialized
    // post-condition:
    //    -elements outputted
    void print(nodeType<Type>* front_)
    {
      while(front_ != nullptr)
      {
        cout << front_->info << " ";
        front_ = front_->link;
      }
      cout << endl;
    }

  private:
    nodeType<Type> *qFront; //points to the front of the queue
    nodeType<Type> *qBack; //points to the back of the queue
};

#endif
