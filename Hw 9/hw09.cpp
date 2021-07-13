#include "triangleClass.h"
#include "rectangleClass.h"
#include "shapeClass.h"
using namespace std;

/**********************************************
* Author : Samuel Lin
* Date: July 12, 2021
* Class: CS1C, Summer Session 2021
* Assignment: Hw09
* Summary:
*	-Shape class contains coordinates of the shape
* -Triangle and Rectangle classes inherit from
*  Shape and override Print(), UpdateDimensions(),
*  calcPerimeter() and calcArea()
* -Global functions printPerimeter() and printArea()
*  calls calcPerimeter() and calcArea() functions
* INPUT:
*   -length and width of rectangle is inputted
*   -lengths of triangles inputted
* OUTPUT:
*   -perimeter and area of triangle
*    and rectangle are ouptted
**********************************************/

template <class Type>
void printPerimeter(Type obj)
{
  cout << "Shape perimeter: " << obj.calcPerimeter() << endl;
}
template <class Type>
void printArea(Type obj)
{
  cout << "Shape area: " << obj.calcArea() << endl;
}

int main()
{
  int d1;
  int d2;
  int d3;

  cout << "Enter length of rectangle: ";
  cin >> d1;
  cout << "Enter width of rectangle: ";
  cin >> d2;

  Rectangle rect;
  rect.UpdateDimensions(d1, d2);
  cout << endl << "Rectangle info:" << endl;
  printPerimeter(rect);
  printArea(rect);

  cout << endl << "Enter first side of triangle: ";
  cin >> d1;
  cout << "Enter second side of triangle: ";
  cin >> d2;
  cout << "Enter third side of triangle: ";
  cin >> d3;

  Triangle tri;
  tri.UpdateDimensions(d1, d2, d3);
  cout << endl << "Triangle info" << endl;
  printPerimeter(tri);
  printArea(tri);
}
