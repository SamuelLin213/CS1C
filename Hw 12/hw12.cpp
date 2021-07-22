#include "queueType.h"
#include "queueArr.h"
#include "linkedQueue.h"
using namespace std;

/**********************************************
* Author : Samuel Lin
* Date: July 22, 2021
* Class: CS1C, Summer Session 2021
* Assignment: Hw 12 - Templates(Queues)
* Summary:
*	-array-based and node-based queues are derived
*  from the ADT queueType
* -adding, removing, isEmpty, isFull and front methods
*  are tested for three different data types(int, double, string)
* INPUT:
*    <none>
* OUTPUT:
*   -queue after each addition/deletion
*   -front of queue
*   -result of isEmpty and isFull
**********************************************/

int main()
{
  //int queue
  queueArr<int> queueInt(6);

  //removing from empty queue
  queueInt.dequeue();

  cout << endl << "Before adding elements:" << endl;
  cout << "Queue is empty? " << boolalpha << queueInt.isEmptyQueue() << endl;
  cout << "Queue is full? " << queueInt.isFullQueue() << endl;

  //adding elements
  cout << endl << "adding elements:" << endl;
  queueInt.enqueue(1);
  cout << "after adding first element: ";
  queueInt.print(queueInt);
  queueInt.enqueue(2);
  cout << "after adding second element: ";
  queueInt.print(queueInt);
  queueInt.enqueue(3);
  cout << "after adding third element: ";
  queueInt.print(queueInt);
  queueInt.enqueue(4);
  cout << "after adding fourth element: ";
  queueInt.print(queueInt);
  queueInt.enqueue(5);
  cout << "after adding fifth element: ";
  queueInt.print(queueInt);
  queueInt.enqueue(6);
  cout << "after adding sixth element: ";
  queueInt.print(queueInt);

  cout << endl << "After adding elements:" << endl;
  cout << "Queue is empty? " << queueInt.isEmptyQueue() << endl;
  cout << "Queue is full? " << queueInt.isFullQueue() << endl;

  cout << endl << "Testing front(): " << endl;
  cout << "Front of queue: " << queueInt.front() << endl;

  //deleting elements
  cout << endl << "deleting elements: " << endl;
  queueInt.dequeue();
  cout << "after deleting one element:";
  queueInt.print(queueInt);
  queueInt.dequeue();
  cout << "after deleting two elements:";
  queueInt.print(queueInt);
  queueInt.dequeue();
  cout << "after deleting three elements:";
  queueInt.print(queueInt);
  queueInt.dequeue();
  cout << "after deleting four elements:";
  queueInt.print(queueInt);

  //adding more elements
  cout << endl << "adding more elements:" << endl;
  queueInt.enqueue(1);
  cout << "after adding third element: ";
  queueInt.print(queueInt);
  queueInt.enqueue(2);
  cout << "after adding fourth element: ";
  queueInt.print(queueInt);
  queueInt.enqueue(3);
  cout << "after adding fifth element: ";
  queueInt.print(queueInt);
  queueInt.enqueue(4);
  cout << "after adding sixth element: ";
  queueInt.print(queueInt);
  cout << "after adding seventh element: ";
  queueInt.enqueue(5);
  queueInt.print(queueInt);

  //deleting more elements
  cout << endl << "deleting more elements:" << endl;
  queueInt.dequeue();
  cout << "after deleting one element:";
  queueInt.print(queueInt);
  queueInt.dequeue();
  cout << "after deleting two elements:";
  queueInt.print(queueInt);
  queueInt.dequeue();
  cout << "after deleting three elements:";
  queueInt.print(queueInt);
  cout << endl << endl;





  //double queue
  queueArr<double> queueDbl(6);

  //removing from empty queue
  queueDbl.dequeue();

  cout << endl << "Before adding elements:" << endl;
  cout << "Queue is empty? " << boolalpha << queueDbl.isEmptyQueue() << endl;
  cout << "Queue is full? " << queueDbl.isFullQueue() << endl;

  //adding elements
  cout << endl << "adding elements:" << endl;
  queueDbl.enqueue(1.1);
  cout << "after adding first element: ";
  queueDbl.print(queueDbl);
  queueDbl.enqueue(2.2);
  cout << "after adding second element: ";
  queueDbl.print(queueDbl);
  queueDbl.enqueue(3.3);
  cout << "after adding third element: ";
  queueDbl.print(queueDbl);
  queueDbl.enqueue(4.4);
  cout << "after adding fourth element: ";
  queueDbl.print(queueDbl);
  queueDbl.enqueue(5.5);
  cout << "after adding fifth element: ";
  queueDbl.print(queueDbl);
  queueDbl.enqueue(6.6);
  cout << "after adding sixth element: ";
  queueDbl.print(queueDbl);

  cout << endl << "After adding elements:" << endl;
  cout << "Queue is empty? " << queueDbl.isEmptyQueue() << endl;
  cout << "Queue is full? " << queueDbl.isFullQueue() << endl;

  cout << endl << "Testing front(): " << endl;
  cout << "Front of queue: " << queueDbl.front() << endl;

  //deleting elements
  cout << endl << "deleting elements: " << endl;
  queueDbl.dequeue();
  cout << "after deleting one element:";
  queueDbl.print(queueDbl);
  queueDbl.dequeue();
  cout << "after deleting two elements:";
  queueDbl.print(queueDbl);
  queueDbl.dequeue();
  cout << "after deleting three elements:";
  queueDbl.print(queueDbl);
  queueDbl.dequeue();
  cout << "after deleting four elements:";
  queueDbl.print(queueDbl);

  //adding more elements
  cout << endl << "adding more elements:" << endl;
  queueDbl.enqueue(1.2);
  cout << "after adding third element: ";
  queueDbl.print(queueDbl);
  queueDbl.enqueue(2.3);
  cout << "after adding fourth element: ";
  queueDbl.print(queueDbl);
  queueDbl.enqueue(3.4);
  cout << "after adding fifth element: ";
  queueDbl.print(queueDbl);
  queueDbl.enqueue(4.5);
  cout << "after adding sixth element: ";
  queueDbl.print(queueDbl);
  cout << "after adding seventh element: ";
  queueDbl.enqueue(5.6);
  queueDbl.print(queueDbl);

  //deleting more elements
  cout << endl << "deleting more elements:" << endl;
  queueDbl.dequeue();
  cout << "after deleting one element:";
  queueDbl.print(queueDbl);
  queueDbl.dequeue();
  cout << "after deleting two elements:";
  queueDbl.print(queueDbl);
  queueDbl.dequeue();
  cout << "after deleting three elements:";
  queueDbl.print(queueDbl);
  cout << endl << endl;





  //string queue
  queueArr<string> queueStr(6);

  //removing from empty queue
  queueStr.dequeue();

  cout << endl << "Before adding elements:" << endl;
  cout << "Queue is empty? " << boolalpha << queueStr.isEmptyQueue() << endl;
  cout << "Queue is full? " << queueStr.isFullQueue() << endl;

  //adding elements
  cout << endl << "adding elements:" << endl;
  queueStr.enqueue("This");
  cout << "after adding first element: ";
  queueStr.print(queueStr);
  queueStr.enqueue("is");
  cout << "after adding second element: ";
  queueStr.print(queueStr);
  queueStr.enqueue("an");
  cout << "after adding third element: ";
  queueStr.print(queueStr);
  queueStr.enqueue("array");
  cout << "after adding fourth element: ";
  queueStr.print(queueStr);
  queueStr.enqueue("based");
  cout << "after adding fifth element: ";
  queueStr.print(queueStr);
  queueStr.enqueue("queue");
  cout << "after adding sixth element: ";
  queueStr.print(queueStr);

  cout << endl << "After adding elements:" << endl;
  cout << "Queue is empty? " << queueStr.isEmptyQueue() << endl;
  cout << "Queue is full? " << queueStr.isFullQueue() << endl;

  cout << endl << "Testing front(): " << endl;
  cout << "Front of queue: " << queueStr.front() << endl;

  //deleting elements
  cout << endl << "deleting elements: " << endl;
  queueStr.dequeue();
  cout << "after deleting one element:";
  queueStr.print(queueStr);
  queueStr.dequeue();
  cout << "after deleting two elements:";
  queueStr.print(queueStr);
  queueStr.dequeue();
  cout << "after deleting three elements:";
  queueStr.print(queueStr);
  queueStr.dequeue();
  cout << "after deleting four elements:";
  queueStr.print(queueStr);

  //adding more elements
  cout << endl << "adding more elements:" << endl;
  queueStr.enqueue("Adding");
  cout << "after adding third element: ";
  queueStr.print(queueStr);
  queueStr.enqueue("more");
  cout << "after adding fourth element: ";
  queueStr.print(queueStr);
  queueStr.enqueue("string");
  cout << "after adding fifth element: ";
  queueStr.print(queueStr);
  queueStr.enqueue("elements");
  cout << "after adding sixth element: ";
  queueStr.print(queueStr);
  cout << "after adding seventh element: ";
  queueStr.enqueue("here");
  queueStr.print(queueStr);

  //deleting more elements
  cout << endl << "deleting more elements:" << endl;
  queueStr.dequeue();
  cout << "after deleting one element:";
  queueStr.print(queueStr);
  queueStr.dequeue();
  cout << "after deleting two elements:";
  queueStr.print(queueStr);
  queueStr.dequeue();
  cout << "after deleting three elements:";
  queueStr.print(queueStr);











  //int queue
  linkedQueue<int> queueIntNode;

  //removing from empty queue
  queueIntNode.dequeue();

  cout << endl << "Before adding elements:" << endl;
  cout << "Queue is empty? " << boolalpha << queueIntNode.isEmptyQueue() << endl;
  cout << "Queue is full? " << queueIntNode.isFullQueue() << endl;

  //adding elements
  cout << endl << "adding elements:" << endl;
  queueIntNode.enqueue(1);
  cout << "after adding first element: ";
  queueIntNode.print(queueIntNode.frontLink());
  queueIntNode.enqueue(2);
  cout << "after adding second element: ";
  queueIntNode.print(queueIntNode.frontLink());
  queueIntNode.enqueue(3);
  cout << "after adding third element: ";
  queueIntNode.print(queueIntNode.frontLink());
  queueIntNode.enqueue(4);
  cout << "after adding fourth element: ";
  queueIntNode.print(queueIntNode.frontLink());
  queueIntNode.enqueue(5);
  cout << "after adding fifth element: ";
  queueIntNode.print(queueIntNode.frontLink());
  queueIntNode.enqueue(6);
  cout << "after adding sixth element: ";
  queueIntNode.print(queueIntNode.frontLink());

  cout << endl << "After adding elements:" << endl;
  cout << "Queue is empty? " << queueIntNode.isEmptyQueue() << endl;
  cout << "Queue is full? " << queueIntNode.isFullQueue() << endl;

  cout << endl << "Testing front(): " << endl;
  cout << "Front of queue: " << queueIntNode.front() << endl;

  //deleting elements
  cout << endl << "deleting elements: " << endl;
  queueIntNode.dequeue();
  cout << "after deleting one element:";
  queueIntNode.print(queueIntNode.frontLink());
  queueIntNode.dequeue();
  cout << "after deleting two elements:";
  queueIntNode.print(queueIntNode.frontLink());
  queueIntNode.dequeue();
  cout << "after deleting three elements:";
  queueIntNode.print(queueIntNode.frontLink());
  queueIntNode.dequeue();
  cout << "after deleting four elements:";
  queueIntNode.print(queueIntNode.frontLink());

  //adding more elements
  cout << endl << "adding more elements:" << endl;
  queueIntNode.enqueue(1);
  cout << "after adding third element: ";
  queueIntNode.print(queueIntNode.frontLink());
  queueIntNode.enqueue(2);
  cout << "after adding fourth element: ";
  queueIntNode.print(queueIntNode.frontLink());
  queueIntNode.enqueue(3);
  cout << "after adding fifth element: ";
  queueIntNode.print(queueIntNode.frontLink());
  queueIntNode.enqueue(4);
  cout << "after adding sixth element: ";
  queueIntNode.print(queueIntNode.frontLink());
  cout << "after adding seventh element: ";
  queueIntNode.enqueue(5);
  queueIntNode.print(queueIntNode.frontLink());

  //deleting more elements
  cout << endl << "deleting more elements:" << endl;
  queueIntNode.dequeue();
  cout << "after deleting one element:";
  queueIntNode.print(queueIntNode.frontLink());
  queueIntNode.dequeue();
  cout << "after deleting two elements:";
  queueIntNode.print(queueIntNode.frontLink());
  queueIntNode.dequeue();
  cout << "after deleting three elements:";
  queueIntNode.print(queueIntNode.frontLink());
  cout << endl << endl;





  //double queue
  linkedQueue<double> queueDblNode;

  //removing from empty queue
  queueDblNode.dequeue();

  cout << endl << "Before adding elements:" << endl;
  cout << "Queue is empty? " << boolalpha << queueDblNode.isEmptyQueue() << endl;
  cout << "Queue is full? " << queueDblNode.isFullQueue() << endl;

  //adding elements
  cout << endl << "adding elements:" << endl;
  queueDblNode.enqueue(1.1);
  cout << "after adding first element: ";
  queueDblNode.print(queueDblNode.frontLink());
  queueDblNode.enqueue(2.2);
  cout << "after adding second element: ";
  queueDblNode.print(queueDblNode.frontLink());
  queueDblNode.enqueue(3.3);
  cout << "after adding third element: ";
  queueDblNode.print(queueDblNode.frontLink());
  queueDblNode.enqueue(4.4);
  cout << "after adding fourth element: ";
  queueDblNode.print(queueDblNode.frontLink());
  queueDblNode.enqueue(5.5);
  cout << "after adding fifth element: ";
  queueDblNode.print(queueDblNode.frontLink());
  queueDblNode.enqueue(6.6);
  cout << "after adding sixth element: ";
  queueDblNode.print(queueDblNode.frontLink());

  cout << endl << "After adding elements:" << endl;
  cout << "Queue is empty? " << queueDblNode.isEmptyQueue() << endl;
  cout << "Queue is full? " << queueDblNode.isFullQueue() << endl;

  cout << endl << "Testing front(): " << endl;
  cout << "Front of queue: " << queueDblNode.front() << endl;

  //deleting elements
  cout << endl << "deleting elements: " << endl;
  queueDblNode.dequeue();
  cout << "after deleting one element:";
  queueDblNode.print(queueDblNode.frontLink());
  queueDblNode.dequeue();
  cout << "after deleting two elements:";
  queueDblNode.print(queueDblNode.frontLink());
  queueDblNode.dequeue();
  cout << "after deleting three elements:";
  queueDblNode.print(queueDblNode.frontLink());
  queueDblNode.dequeue();
  cout << "after deleting four elements:";
  queueDblNode.print(queueDblNode.frontLink());

  //adding more elements
  cout << endl << "adding more elements:" << endl;
  queueDblNode.enqueue(1.2);
  cout << "after adding third element: ";
  queueDblNode.print(queueDblNode.frontLink());
  queueDblNode.enqueue(2.3);
  cout << "after adding fourth element: ";
  queueDblNode.print(queueDblNode.frontLink());
  queueDblNode.enqueue(3.4);
  cout << "after adding fifth element: ";
  queueDblNode.print(queueDblNode.frontLink());
  queueDblNode.enqueue(4.5);
  cout << "after adding sixth element: ";
  queueDblNode.print(queueDblNode.frontLink());
  cout << "after adding seventh element: ";
  queueDblNode.enqueue(5.6);
  queueDblNode.print(queueDblNode.frontLink());

  //deleting more elements
  cout << endl << "deleting more elements:" << endl;
  queueDblNode.dequeue();
  cout << "after deleting one element:";
  queueDblNode.print(queueDblNode.frontLink());
  queueDblNode.dequeue();
  cout << "after deleting two elements:";
  queueDblNode.print(queueDblNode.frontLink());
  queueDblNode.dequeue();
  cout << "after deleting three elements:";
  queueDblNode.print(queueDblNode.frontLink());
  cout << endl << endl;





  //string queue
  linkedQueue<string> queueStrNode;

  //removing from empty queue
  queueStrNode.dequeue();

  cout << endl << "Before adding elements:" << endl;
  cout << "Queue is empty? " << boolalpha << queueStrNode.isEmptyQueue() << endl;
  cout << "Queue is full? " << queueStrNode.isFullQueue() << endl;

  //adding elements
  cout << endl << "adding elements:" << endl;
  queueStrNode.enqueue("This");
  cout << "after adding first element: ";
  queueStrNode.print(queueStrNode.frontLink());
  queueStrNode.enqueue("is");
  cout << "after adding second element: ";
  queueStrNode.print(queueStrNode.frontLink());
  queueStrNode.enqueue("an");
  cout << "after adding third element: ";
  queueStrNode.print(queueStrNode.frontLink());
  queueStrNode.enqueue("array");
  cout << "after adding fourth element: ";
  queueStrNode.print(queueStrNode.frontLink());
  queueStrNode.enqueue("based");
  cout << "after adding fifth element: ";
  queueStrNode.print(queueStrNode.frontLink());
  queueStrNode.enqueue("queue");
  cout << "after adding sixth element: ";
  queueStrNode.print(queueStrNode.frontLink());

  cout << endl << "After adding elements:" << endl;
  cout << "Queue is empty? " << queueStrNode.isEmptyQueue() << endl;
  cout << "Queue is full? " << queueStrNode.isFullQueue() << endl;

  cout << endl << "Testing front(): " << endl;
  cout << "Front of queue: " << queueStrNode.front() << endl;

  //deleting elements
  cout << endl << "deleting elements: " << endl;
  queueStrNode.dequeue();
  cout << "after deleting one element:";
  queueStrNode.print(queueStrNode.frontLink());
  queueStrNode.dequeue();
  cout << "after deleting two elements:";
  queueStrNode.print(queueStrNode.frontLink());
  queueStrNode.dequeue();
  cout << "after deleting three elements:";
  queueStrNode.print(queueStrNode.frontLink());
  queueStrNode.dequeue();
  cout << "after deleting four elements:";
  queueStrNode.print(queueStrNode.frontLink());

  //adding more elements
  cout << endl << "adding more elements:" << endl;
  queueStrNode.enqueue("Adding");
  cout << "after adding third element: ";
  queueStrNode.print(queueStrNode.frontLink());
  queueStrNode.enqueue("more");
  cout << "after adding fourth element: ";
  queueStrNode.print(queueStrNode.frontLink());
  queueStrNode.enqueue("string");
  cout << "after adding fifth element: ";
  queueStrNode.print(queueStrNode.frontLink());
  queueStrNode.enqueue("elements");
  cout << "after adding sixth element: ";
  queueStrNode.print(queueStrNode.frontLink());
  cout << "after adding seventh element: ";
  queueStrNode.enqueue("here");
  queueStrNode.print(queueStrNode.frontLink());

  //deleting more elements
  cout << endl << "deleting more elements:" << endl;
  queueStrNode.dequeue();
  cout << "after deleting one element:";
  queueStrNode.print(queueStrNode.frontLink());
  queueStrNode.dequeue();
  cout << "after deleting two elements:";
  queueStrNode.print(queueStrNode.frontLink());
  queueStrNode.dequeue();
  cout << "after deleting three elements:";
  queueStrNode.print(queueStrNode.frontLink());

  return 0;
}
