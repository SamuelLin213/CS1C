#include "triangleClass.h"
using namespace std;

class Triangle;

void Triangle::Print()
{
  Shape::Print();
  cout << "side one: " << s1 << endl;
  cout << "side two: " << s2 << endl;
  cout << "side three: " << s3 << endl;
  cout << "perimeter: " << calcPerimeter() << endl;
  cout << "area: " << calcArea() << endl;
}
void Triangle::UpdateDimensions(int s1_, int s2_, int s3_)
{
  s1 = s1_;
  s2 = s2_;
  s3 = s3_;
}
int Triangle::calcPerimeter()
{
  return (s1 + s2 + s3);
}
int Triangle::calcArea()
{
  double s = (s1 + s2 + s3)/2.0;
  double area = sqrt(s*(s-s1)*(s-s2)*(s-s3));

  return (int)area;
}
