#include "rectangleClass.h"
using namespace std;

class Rectangle;

void Rectangle::Print()
{ 
  Shape::Print();
  cout << "length: " << l << endl;
  cout << "width: " << w << endl;
}
void Rectangle::UpdateDimensions(int l_, int w_)
{
  l = l_;
  w = w_;
}
