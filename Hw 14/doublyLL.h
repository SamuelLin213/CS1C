#ifndef DOUBLYLL_H
#define DOUBLYLL_H

#include <iostream>
#include <iomanip>
using namespace std;

template <class Type>
struct nodeType
{
  Type info;
  nodeType<Type> *next;
  nodeType<Type> *back;
};

template <class Type>
class doublyLinkedList
{
  public:
    //Overloaded copy assignment operator
    //defines copy assignment for doubly linked list
    //Pre-condition:
    //  -other linked list initialized and passed in
    //  -this linked list initialized
    //Post-condition:
    //  -copies linked list other into this linked list
    const doublyLinkedList<Type>& operator=(const doublyLinkedList<Type> &other)
    {
      if(this != other)
      {
        while(first)
        {
          nodeType<Type> *temp = first;
          first = first->next;
          delete temp;
        }

        nodeType<Type> start;
        nodeType<Type> *dummy = &start;
        nodeType<Type> otherF = other.first;
        while(otherF)
        {
          dummy->next = new nodeType<Type>(*otherF);
          dummy = dummy->next;
          otherF = otherF->next;
        }
        dummy->next = nullptr;
      }
      return *this;
    }

    //Overloaded move assignment operator
    //defines move assignment for doubly linked list
    //Pre-condition:
    //  -other linked list initialized and passed in
    //  -this linked list initialized
    //Post-condition:
    //  -moves linked list other into this linked list
    doublyLinkedList<Type>& operator=(doublyLinkedList<Type>&& other) noexcept
    {
      // if(this != other)
      // {
      //   while(first)
      //   {
      //     nodeType<Type> *temp = first;
      //     first = first->next;
      //     delete temp;
      //   }
      //
      //   nodeType<Type> start;
      //   nodeType<Type> *dummy = &start;
      //   nodeType<Type> otherF = other.first;
      //   while(otherF)
      //   {
      //     dummy->next = new nodeType<Type>(*otherF);
      //     dummy = dummy->next;
      //     otherF = otherF->next;
      //   }
      //   dummy->next = nullptr;
      // }
      // //other.destroy();
      first = nullptr;
      last = nullptr;

      std::swap(first, other.first);
      std::swap(last, other.last);

      return *this;
    }

    //Initialize list
    //Initializes list by calling destroy
    //Pre-condition:
    //  <none>
    //Post-condition:
    //  -calls destroy and deletes all nodes
    void initializeList()
    {
      destroy();
    }

    //isEmptyList
    //Checks if list is empty
    //Pre-condition
    //  -list initialized
    //Post-condition
    //  -returns bool value whether list is empty
    bool isEmptyList() const
    {
      return (first == nullptr);
    }

    //destroy
    //deletes all nodes in list
    //Pre-condition:
    //  <none>
    //Post-condition:
    //  -deletes all nodes in list
    void destroy()
    {
      nodeType<Type> *temp; //pointer to delete the node
      while (first != nullptr)
      {
        temp = first;
        first = first->next;
        delete temp;
      }
      last = nullptr;
      count = 0;
    }

    //print
    //Outputs all nodes in list
    //Pre-condition:
    //  -list initialized
    //Post-condition:
    //  -outputs all nodes
    void print() const
    {
      nodeType<Type> *current = first;
      // current = first;
      while (current != nullptr)
      {
        cout << current->info << " ";
        current = current->next;
      }
    }

    //length
    //Returns count of nodes
    //Pre-condition:
    //  -list initialized
    //Post-condition
    //  -count value returned
    int length() const
    {
      return count;
    }

    //front
    //Returns data in first node
    //Pre-condition:
    //  <none>
    //Post-condition:
    //  -returns info stored in first
    Type front() const
    {
      assert(first != nullptr);
      return first->info;
    }

    //back
    //Returns data in last node
    //Pre-condition:
    //  <none>
    //Post-condition:
    //  -returns info stored in last
    Type back() const
    {
      assert(last != nullptr);
      return last->info;
    }

    //search
    //Looks for searchItem in list
    //Pre-condition
    //  -List initialized
    //Post-condition:
    //  -returns bool whether searchItem was found
    bool search(const Type& searchItem) const
    {
      bool found = false;
      nodeType<Type> *current; //pointer to traverse the list
      current = first;
      while (current != nullptr && !found)
      {
        if (current->info >= searchItem)
          found = true;
        else
          current = current->next;
      }
      if (found)
        found = (current->info == searchItem); //test for
      //equality
      return found;
    }

    //insert a value
    //Adds value into list, in the right place(in order)
    //Pre-condition:
    //  -list initialized
    //Post-condition:
    //  -adds new node to list in ascending order
    void insert(const Type& insertItem)
    {
      nodeType<Type> *current;
      //pointer to traverse the list
      nodeType<Type> *trailCurrent; //pointer just before current
      nodeType<Type> *newNode;
      //pointer to create a node
      bool found;

      newNode = new nodeType<Type>; //create the node
      newNode->info = insertItem;
      //store the new item in the node
      newNode->next = nullptr;
      newNode->back = nullptr;

      if (first == nullptr) //if the list is empty, newNode is
      //the only node
      {
        first = newNode;
        last = newNode;
        count++;
      }
      else
      {
        found = false;
        current = first;
        while (current != nullptr && !found) //search the list
        {
          if (current->info >= insertItem)
            found = true;
          else
          {
            trailCurrent = current;
            current = current->next;
          }
        }
        if (current == first) //insert newNode before first
        {
          first->back = newNode;
          newNode->next = first;
          first = newNode;
          count++;
        }
        else
        {
          //insert newNode between trailCurrent and current
          if (current != nullptr)
          {
            trailCurrent->next = newNode;
            newNode->back = trailCurrent;
            newNode->next = current;
            current->back = newNode;
          }
          else
          {
            trailCurrent->next = newNode;
            newNode->back = trailCurrent;
            last = newNode;
          }
          count++;
        }//end else
      }//end else
    }

    //add value
    //adds elements to linked list, at end
    //pre-condition:
    //  -linked list initialized
    //post-condition:
    //  -value added at end of the linked list
    void add(const Type& insertItem)
    {
      nodeType<Type> *trailCurrent; //pointer just before current
      nodeType<Type> *newNode = new nodeType<Type>; //create the node
      newNode->info = insertItem;
      newNode->next = nullptr;
      newNode->back = nullptr;

      if (first == nullptr) //if the list is empty, newNode is
      //the only node
      {
        first = newNode;
        last = newNode;
        count++;
      }
      else
      {
        trailCurrent = last;

        trailCurrent->next = newNode;
        newNode->back = trailCurrent;
        last = newNode;

        count++;
      }//end else
    }

    //deleteNode
    //Removes node from list
    //Pre-condition:
    //  -list initialized
    //Post-condition:
    //  -removes node from list
    void deleteNode(const Type& deleteItem)
    {
      nodeType<Type> *current; //pointer to traverse the list
      nodeType<Type> *trailCurrent; //pointer just before current
      bool found;
      if (first == nullptr)
        cout << "Cannot delete from an empty list." << endl;
      else if (first->info == deleteItem) //node to be deleted is
      //the first node
      {
        current = first;
        first = first->next;
        if (first != nullptr)
          first->back = nullptr;
        else
          last = nullptr;
        count--;
        delete current;
        }
        else
        {
          found = false;
          current = first;
          while (current != nullptr && !found)
          {
            if (current->info >= deleteItem)
              found = true;
            else
              current = current->next;
              //search the list
          }
          if (current == nullptr)
            cout << "The item to be deleted is not in "
            << "the list." << endl;
          else if (current->info == deleteItem) //check for
          //equality
          {
            trailCurrent = current->back;
            trailCurrent->next = current->next;
            if (current->next != nullptr)
              current->next->back = trailCurrent;
            if (current == last)
              last = trailCurrent;
            count--;
            delete current;
          }
          else
            cout << "The item to be deleted is not in list."
            << endl;
      }//end else
    }

    //Default constructor
    //Creates default list object
    //Pre-condition:
    //  <none>
    //Post-condition:
    //  -first and last set to nullptr
    //  -count set to 0
    doublyLinkedList()
    {
      first= nullptr;
      last = nullptr;
      count = 0;
    }

    //copy constructor
    //copies all nodes from otherList into this list
    //Pre-condition
    //  <none>
    //Post-condition:
    //  -all nodes of otherList copied into this list
    doublyLinkedList(const doublyLinkedList<Type>& otherList)
    {
      first = nullptr;
      last = nullptr;

      nodeType<Type> *current = otherList.first;

      nodeType<Type> *end = nullptr;
      nodeType<Type> *previous = nullptr;

      while(current)
      {
        nodeType<Type> *n = new nodeType<Type>;
        n->info = current->info;

        if(first == nullptr)
        {
          first = n;
          end = first;
        }
        else{
          end->next = n;
          end = n;
        }
        n->back = previous;
        previous = n;
        current = current->next;
      }
    }

    //Move constructor
    //moves all nodes from otherList to this list
    //Pre-condition
    //  <none>
    //Post-condition:
    //  -all nodes of otherList moved into this list
    doublyLinkedList(doublyLinkedList<Type>&& otherList) noexcept
    {
      first = nullptr;
      last = nullptr;
      //
      // nodeType<Type> *current = std::move(otherList.first);
      //
      // nodeType<Type> *end = nullptr;
      // nodeType<Type> *previous = nullptr;
      //
      // while(current)
      // {
      //   nodeType<Type> *n = new nodeType<Type>;
      //   n->info = std::move(current->info);
      //
      //   if(first == nullptr)
      //   {
      //     first = n;
      //     end = first;
      //   }
      //   else{
      //     end->next = n;
      //     end = n;
      //   }
      //   n->back = std::move(previous);
      //   previous = n;
      //   current = current->next;
      // }
      // otherList.destroy();
      std::swap(first, otherList.first);
      std::swap(last, otherList.last);
    }

    //Destructor
    //destroys this list object
    //Pre-condition:
    //  -this list initialized
    //Post-condition:
    //  -all nodes deleted in this list
    ~doublyLinkedList()
    {
      while(first)
      {
        nodeType<Type> *move = first;
        first = first->next;
        delete move;
      }
    }

    //first pointer accessor
    //returns a pointer to the first node
    //pre-condition:
    //  -list initialized
    //post-condition:
    //  -pointer to first node is returned
    nodeType<Type>* getFirst()
    {
      return first;
    }

    //last pointer accessor
    //returns a pointer to the last node
    //pre-condition:
    //  -list initialized
    //post-condition:
    //  -pointer to last node is returned
    nodeType<Type>* getLast()
    {
      return last;
    }

  protected:
    int count;
    nodeType<Type> *first; //pointer to the first node
    nodeType<Type> *last; //pointer to the last node

  private:
    void copyList(const doublyLinkedList<Type>& otherList);
};

#endif
