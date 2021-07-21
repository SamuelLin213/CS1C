//#include "queueType.h"
#include "queueArr.h"
using namespace std;

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

  return 0;
}
