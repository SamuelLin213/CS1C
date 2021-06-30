#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <iomanip>
using namespace std;

struct Item
{
  string name;
  int quantity;
  float cost;
};
const int MAX_SIZE = 50;

class ManageInventory
{
  /****************************************
  * overloaded operator
  * overloads << to output member variables
  * pre-condition:
  *     -ostream object passed in
  *     -ManageInventory object declared
  *      and passed in
  * post-condition:
  *     -member variables outputted
  ****************************************/
  friend ostream& operator<<(ostream&, const ManageInventory&);

  public:
    /****************************************
    * default constructor
    * Creates default object of the class
    * pre-condition:
    *     <none>
    * post-condition:
    *     -sets default values into member variables
    *****************************************/
    ManageInventory()
      :count{0}, p_pInventoryItems{new Item*[size]}
    {}

    /****************************************
    * non-default constructor
    * Creates non-default object of extendedTime class
    * pre-condition:
    *     -parameters defined and passed in
    * post-condition:
    *     -sets parameter values into member variables
    *****************************************/
    ManageInventory(int size)
      :size{size}, count{0}, p_pInventoryItems{new Item*[size]}
    {}

    /****************************************
    * destructor
    * destroys all Item objects
    * pre-condition:
    *     <none>
    * post-condition:
    *     -all Item objects deallocated
    ****************************************/
    ~ManageInventory();

    /****************************************
    * addItem function
    * adds Item object to class array
    * pre-condition:
    *     -parameters defined and passed in
    * post-condition:
    *     -adds Item object to array, and sets
    *      the struct memberes with their
    *      respective values
    ****************************************/
    void addItem(string name, int quantity, float cost);
  private:
    int size {MAX_SIZE}; //stores size of array, defaulted to MAX_SIZE const
    int count; //number of elements in array
    Item ** p_pInventoryItems; //pointer to pointer of Items
};

#endif
