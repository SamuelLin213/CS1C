#include "inventory.h"
using namespace std;

class ManageInventory;

ManageInventory::~ManageInventory()
{
  delete [] p_pInventoryItems;
}

void ManageInventory::addItem(string name, int quantity, float cost)
{
  p_pInventoryItems[count] = new Item;
  p_pInventoryItems[count]->name = name;
  p_pInventoryItems[count]->quantity = quantity;
  p_pInventoryItems[count]->cost = cost;

  count++;
}
ostream& operator<<(ostream& osObject, const ManageInventory& object)
{
  for(int x = 0; x < object.count; x++)
  {
      osObject << "Name: " << object.p_pInventoryItems[x]->name << ", quantity: "
      << object.p_pInventoryItems[x]->quantity << ", cost: "
      << object.p_pInventoryItems[x]->cost << endl;
  }

  return osObject;
}
