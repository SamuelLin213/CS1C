#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

namespace itemInfo{
  struct Item
  {
    string name;
    int quantity;
    float cost;
  };
}
using namespace itemInfo;

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
      :size{new int}, count{new int}, purchaseCnt{new int}, total{new float}
    {
      *size = MAX_SIZE;
      *count = 0;
      *purchaseCnt = 0;
      *total = 0.0;
      p_pInventoryItems = new Item*[*size];
      amtBought = new int[*size];
      transactions = new Item*[*size];
    }

    /****************************************
    * non-default constructor
    * Creates non-default object of extendedTime class
    * pre-condition:
    *     -parameters defined and passed in
    * post-condition:
    *     -sets parameter values into member variables
    *****************************************/
    ManageInventory(int size)
      :size{new int}, count{new int}, purchaseCnt{new int}, total{new float}
    {
      *(this->size) = size;
      *count = 0;
      *purchaseCnt = 0;
      *total = 0.0;
      amtBought = new int[*(this->size)];
      p_pInventoryItems = new Item*[*(this->size)];
      transactions = new Item*[*(this->size)];
    }

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

    /****************************************
    * searchItem function
    * loops through inventory and returns index
    * of item found
    * pre-condition:
    *     -string passed in
    * post-condition:
    *     -int index of string is returned
    *     -int of -1 is returned if not found
    ****************************************/
    int searchItem(string);

    /****************************************
    * buyItem function
    * purchases an item from the inventory;
    * updates the quantity of the item bought
    * pre-condition:
    *     -int, string and float passed in
    * post-condition:
    *     -decreases item quantity based on
    *      amount bought
    *     -amtBought array is updated to store
    *      quantity of item bought
    *     -total spent is updated with item costs
    ****************************************/
    void buyItem(int, string);

    /****************************************
    * printRecipt function
    * prints receipt of all items bought and
    * their respective prices and quantities
    * pre-condition:
    *     -inventory array initialized
    * post-condition:
    *     -item quantities and costs outputted
    ****************************************/
    void printRecipt();

    /****************************************
    * transactionHist function
    * prints all transactions, including
    * cost and quantity of each item, outputs
    * items in order of purchase
    * pre-condition:
    *     -inventory array initialized
    * post-condition:
    *     -item quantities and costs outputted
    ****************************************/
    void transactionHist();

    /****************************************
    * copy constructor
    * copies values of one object into another
    * pre-condition:
    *     -ManageInventory object declared and
    *      passed in
    * post-condition:
    *     -values copied into this object
    ****************************************/
    ManageInventory(const ManageInventory& other);

  private:
    int *size; //stores size of array, defaulted to MAX_SIZE const
    int *count; //number of elements in array
    Item ** p_pInventoryItems; //pointer to pointer of Items
    int * amtBought; //stores the quantity of each item bought
    Item ** transactions; //stores transactions
    int *purchaseCnt; //counts number of purchases
    float *total; //saves total cost of purchase(s)
};

#endif
