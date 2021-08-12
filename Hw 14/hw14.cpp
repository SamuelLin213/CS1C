#include "doublyLL.h"
using namespace std;

int main()
{
  //Using int in class template
  doublyLinkedList<int> list;
  list.initializeList();

  //initialize linked list with values
  for(int x = 0; x < 9; x+=2)
  {
    list.insert(x+1);
  }

  //prints elements in initial list
  cout << "Printing list contents:" << endl;
  list.print();
  cout << endl << endl;

  //create listCopy1, call copy constructor
  doublyLinkedList<int> listCopy1(list);
  cout << "Printing listCopy1 contents:" << endl;
  listCopy1.print();
  cout << endl << endl;
  listCopy1.insert(10);

  //create listCopy2, call copy assignment
  doublyLinkedList<int> listCopy2 = listCopy1;
  cout << "Printing listCopy2 contents:" << endl;
  listCopy2.print();
  cout << endl << endl;

  //create list_moved_to, call move constructor
  doublyLinkedList<int> list_moved_to(std::move(listCopy1));
  cout << "Printing list_moved_to contents:" << endl;
  list_moved_to.print();
  cout << endl << endl;
  cout << "Printing listCopy1 contents after being moved to list_moved_to:" << endl;
  listCopy1.print();
  cout << endl << endl;
  list_moved_to.destroy(); //empties list_moved_to, which currently contains values of listCopy1

  listCopy2.insert(11);

  //calls move assignment on existing list_moved_to
  list_moved_to = std::move(listCopy2);
  cout << "Printing list_moved_to contents:" << endl;
  list_moved_to.print();
  cout << endl << endl;
  cout << "Printing listCopy2 contents after being moved to list_moved_to:" << endl;
  listCopy2.print();
  cout << endl << endl;

  //create new linked list to store reversed list
  doublyLinkedList<int> listReversed;

  nodeType<int> *ptr = list.getLast();

  while(ptr != nullptr)
  {
    listReversed.add(ptr->info);
    ptr=ptr->back;
  }
  delete ptr;

  cout << "Printing listReversed contents: " << endl;
  listReversed.print();
  cout << endl << endl;

  //delete from an empty list
  doublyLinkedList<int> testLink;
  cout << "Deleting from empty list: " << endl;
  testLink.deleteNode(5);
  testLink.insert(1);
  testLink.insert(3);
  testLink.insert(5);
  cout << endl << "testLink contents:" << endl;
  testLink.print();

  //delete nonexistent value from linked list
  cout << endl << endl << "Deleting nonexistent node 7 from list:" << endl;
  testLink.deleteNode(7);

  //delete the third element in list
  cout << endl << "Deleting third element from list" << endl;
  testLink.deleteNode(3);
  cout << "testLink contents: ";
  testLink.print();
  cout << endl << endl;

  //adding element in middle of the list
  cout << "Add to middle of list:" << endl;
  testLink.insert(2);
  testLink.print();
  cout << endl;

  //empties all created linked lists
  list.destroy();
  listCopy1.destroy();
  listCopy2.destroy();
  list_moved_to.destroy();

  return 0;
}
