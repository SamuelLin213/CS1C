#include "inventory.h"
using namespace std;

int main()
{
  ManageInventory inventory;
  string itm;
  int qty;
  float prc;

  for(int z = 0; z < 5; z++)
  {
    cout << "Enter item name: ";
    cin >> itm;
    cout << "Enter quantity: ";
    cin >> qty;
    cout << "Enter price: ";
    cin >> prc;
    inventory.addItem(itm, qty, prc);
  }

  cout << endl << "Using overloaded <<: " << endl << inventory;

  return 0;
}
