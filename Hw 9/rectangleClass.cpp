#include "rectangleClass.h"
using namespace std;

class Rectangle;

void Rectangle::Print()
{
  Shape::Print();
  cout << "length: " << l << endl;
  cout << "width: " << w << endl;
  cout << "perimeter: " << calcPerimeter() << endl;
  cout << "area: " << calcArea() << endl;
}
void Rectangle::UpdateDimensions(int l_, int w_)
{
  l = l_;
  w = w_;
}
int Rectangle::calcPerimeter()
{
  return (2 * l) + (2 * w);
}
int Rectangle::calcArea()
{
  return (l * w);
}
