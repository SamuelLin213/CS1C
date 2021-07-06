#include "inventory.h"
using namespace std;
using namespace itemInfo;

class ManageInventory;

ManageInventory::~ManageInventory()
{
  for(int i = 0; p_pInventoryItems[i] != nullptr; i++)
  {
      delete p_pInventoryItems[i];
  }
  delete [] p_pInventoryItems;

  for(int i = 0; transactions[i] != nullptr; i++)
  {
    delete transactions[i];
  }
  delete [] transactions;

  delete [] amtBought;
  delete size;
  delete count;
  delete purchaseCnt;
  delete total;
}

void ManageInventory::addItem(string name, int quantity, float cost)
{
  p_pInventoryItems[*count] = new Item;
  p_pInventoryItems[*count]->name = name;
  p_pInventoryItems[*count]->quantity = quantity;
  p_pInventoryItems[*count]->cost = cost;
  amtBought[*count] = 0;
  (*count)++;
}
ostream& operator<<(ostream& osObject, const ManageInventory& object)
{
  osObject << left << setw(22) << "Name" << setw(4) << "Qty" << setw(6) << "Price" << endl;
  for(int x = 0; x < *(object.count); x++)
  {
      osObject << left << setw(22) << object.p_pInventoryItems[x]->name
      << setw(4) << object.p_pInventoryItems[x]->quantity << setw(6)
      << object.p_pInventoryItems[x]->cost << endl;
  }

  return osObject;
}
int ManageInventory::searchItem(string str)
{
  string strLow = str; //stores search string
  transform(strLow.begin(), strLow.end(), strLow.begin(),
    [](unsigned char c){ return std::tolower(c); }); //converts search string into lowercase

  for(int x = 0; x < *count; x++){
    string nameLow = this->p_pInventoryItems[x]->name; //stores name at index x
    transform(nameLow.begin(), nameLow.end(), nameLow.begin(),
    [](unsigned char c){ return std::tolower(c); }); //converts name to lowercase

    if(nameLow.find(strLow) != string::npos)
      return x;
  }
  return -1;
}
void ManageInventory::buyItem(int qty, string str_)
{
  int index = searchItem(str_);
  this->p_pInventoryItems[index]->quantity -= qty;
  this->amtBought[index] += qty;

  this->transactions[*purchaseCnt] = new Item;
  this->transactions[*purchaseCnt]->name = this->p_pInventoryItems[index]->name;
  this->transactions[*purchaseCnt]->quantity = qty;
  this->transactions[*purchaseCnt]->cost = this->p_pInventoryItems[index]->cost;
  (*purchaseCnt)++;

  *total += (qty*this->p_pInventoryItems[index]->cost);
}
void ManageInventory::printRecipt()
{
  cout << endl << "Recipt: " << endl;
  cout << left << setw(22) << "Name" << setw(4) << "Qty" << endl;
  for(int x = 0; x < *count; x++)
  {
    if(this->amtBought[x] > 0)
    {
      cout << left << setw(22) << this->p_pInventoryItems[x]->name
      << setw(4) << this->amtBought[x] << endl;
    }
  }
  cout << "Total before tax:" << fixed << setprecision(2) << " " << *total << endl;
  cout << "Total after tax:" << fixed << setprecision(2) << " " << ((*total)*1.0825) << endl;
}
//prints items in order of purchase
void ManageInventory::transactionHist()
{
  cout << endl << "Transaction history:" << endl;
  cout << left << setw(22) << "Name" << setw(4) << "Qty" << setw(6) << "Price" << endl;
  for(int x = 0; x < *purchaseCnt; x++)
  {
    cout << left << setw(22) << transactions[x]->name
      << setw(4) << transactions[x]->quantity << setw(6)
      << transactions[x]->cost << endl;
  }
}
ManageInventory::ManageInventory(const ManageInventory& other)
{
  size = new int;
  count = new int;
  purchaseCnt = new int;
  this->size = other.size;
  this->count = other.count;
  this->purchaseCnt = other.purchaseCnt;

  p_pInventoryItems = new Item*[*size];
  amtBought = new int[*size];
  transactions = new Item*[*size];

  for(int x = 0; x < *count; x++)
  {
    p_pInventoryItems[x] = new Item;
    transactions[x] = new Item;
    this->p_pInventoryItems[x]->name = other.p_pInventoryItems[x]->name;
    this->p_pInventoryItems[x]->quantity = other.p_pInventoryItems[x]->quantity;
    this->p_pInventoryItems[x]->cost = other.p_pInventoryItems[x]->cost;
    amtBought[x] = other.amtBought[x];
  }
  for(int x = 0; x < *purchaseCnt; x++)
  {
    this->transactions[x]->name = other.transactions[x]->name;
    this->transactions[x]->quantity = other.transactions[x]->quantity;
    this->transactions[x]->cost = other.transactions[x]->cost;
  }
}
