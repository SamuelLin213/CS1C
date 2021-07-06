#include "inventory.h"
using namespace std;
using namespace itemInfo;

/**********************************************
* Author : Samuel Lin
* Date: July 6, 2021
* Class: CS1C, Summer Session 2021
* Assignment: Hw07 - Pointers & Dynamic Arrays
* Summary:
*	-Item struct and ManageInventory class are
* used to store inventory and purchase info, copy
* constructor is written to copy the inventory
* object and transction history into another
* object
* INPUT:
*    <none>
* OUTPUT:
*   -inventory list before and after Mark's
*    purchases is printed
*   -inventory list of copied object is printed
*   -Mark's receipt is printed
*   -transaction history is printed
**********************************************/

int main()
{
  ManageInventory inventory;

  inventory.addItem("Nike basketball shoes", 22, 145.99);
  inventory.addItem("Under Armour T-shirt", 33, 29.99);
  inventory.addItem("Brooks running shoes", 11, 111.44);
  inventory.addItem("Asics running shoes", 20, 165.88);
  inventory.addItem("Nike shorts", 77, 45.77);

  cout << "Initial inventory: " << endl << inventory;

  cout << endl << "Testing copy constructor:" << endl;
  ManageInventory inventorytwo(inventory);
  cout << "Inventory of copied object:" << endl << inventorytwo;

  inventory.buyItem(2, "Nike basket");
  inventory.buyItem(3, "Under");
  inventory.buyItem(4, "Nike short");
  inventory.buyItem(1, "brooks");

  cout << endl << "Final inventory:" << endl << inventory;

  inventory.printRecipt();

  inventory.transactionHist();

  return 0;
}
