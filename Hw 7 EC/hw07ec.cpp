#include "inventory.h"
using namespace std;

/**********************************************
* Author : Samuel Lin
* Date: July 6, 2021
* Class: CS1C, Summer Session 2021
* Assignment: Hw07 EC - Dynamic Memory
* Summary:
*	-Given ManageInventory class and Item struct,
* the addItem function is written and allows
* user to add another entry in the array of
* structs. The destructor is written to
* dynamically destroy all pointer objects
* INPUT:
*   -respective data for five item objects
* OUTPUT:
*   -The saved data for the objects is outputted
*    using an overloaded << operator
**********************************************/

int main()
{
  ManageInventory inventory;

  string itm;
  int qty;
  float prc;

  for(int z = 0; z < 5; z++)
  {
    cout << "Enter item name: ";
    getline(cin, itm);
    cout << "Enter quantity: ";
    cin >> qty;
    cout << "Enter price: ";
    cin >> prc;
    cin.ignore();
    inventory.addItem(itm, qty, prc);
  }

  cout << endl << "Using overloaded <<: " << endl << inventory;

  return 0;
}
