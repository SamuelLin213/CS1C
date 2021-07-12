#include "circleClass.h"
using namespace std;

class Circle;

void Circle::Print()
{
  Shape::Print();
  cout << "radius: " << r << endl;
}
void Circle::UpdateDimensions(int r_, int)
{
  r = r_;
}
