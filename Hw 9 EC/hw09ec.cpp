#include "circleClass.h"
#include "rectangleClass.h"
#include "shapeClass.h"
using namespace std;

/**********************************************
* Author : Samuel Lin
* Date: July 12, 2021
* Class: CS1C, Summer Session 2021
* Assignment: Hw09 Extra Credit
* Summary:
*	-Shape class contains coordinates of the shape
* -Circle and Rectangle classes inherit from
*  Shape and override Print() and UpdateDimensions()
* -Global function DrawShape calls Move() and UpdateDimensions()
* INPUT:
*   -x/y coordinates, dimensions when DrawShape() is called
* OUTPUT:
*   -coordinates and dimensions of object after
*    constructor, Move() and UpdateDimensions() is called
**********************************************/

template <class Type>
void DrawShape(Type obj)
{
  int dim1;
  int dim2;
  int xCoor;
  int yCoor;

  //Asks for user input
  cout << "Enter x-coordinate: ";
  cin >> xCoor;
  cout << "Enter y-coordinate: ";
  cin >> yCoor;
  cout << "Enter first dimension: ";
  cin >> dim1;
  cout << "Enter second dimension: ";
  cin >> dim2;

  obj.Move(xCoor, yCoor);
  obj.UpdateDimensions(dim1, dim2);
  cout << endl << "Drawn object: " << endl;
  obj.Print();
}

int main()
{
  Rectangle rect(3, 2);
  cout << "Initial Rectangle object:" << endl;
  rect.Print();

  cout << endl << "Testing Rectangle's Move(): " << endl;
  rect.Move(1, 2);
  rect.Print();

  cout << endl << "Testing Rectangle's UpdateDimensions(): " << endl;
  rect.UpdateDimensions(7, 5);
  rect.Print();

  Circle circ(3);
  cout << endl << "Initial Circle object:" << endl;
  circ.Print();

  cout << endl << "Testing Circle's Move(): " << endl;
  circ.Move(2, 2);
  circ.Print();

  cout << endl << "Testing Circle's UpdateDimensions(): " << endl;
  circ.UpdateDimensions(5, 0);
  circ.Print();

  cout << endl;
  DrawShape(circ);

  cout << endl;
  DrawShape(rect);

}

/*******************************************************************************
Q#3
  -No, we don't need to override Move for the derived classes
  -This is because Move() always performs the same functionality and
   updates the object's coordinates
  -Therefore's there's no need to override the function for each derived class
Q#4
  -Print() is static polymorphism, while UpdateDimensions() is dynamic
  -Static binding occurs during compile-time. All information needed to call
   a function is avaliable during compile time, so the function definition and
   function call are linked during this time. Since all info is already
   avaliable, static binding results in faster execution.
  -Dynamic binding occurs during run-time. Because not all necessary information
   is avaliable at compile time, function definitions and calls are linked at
   run-time. Virtual functions are used in dynamic binding, which allows a
   single fucntion to handle different objects.
  -Similar to binding, static and dynmaic polymorphism depends on whether all
   necessary info is already known at compile time.
  -Examples of static polymorphism:
    -function overloading
    -function overriding
  -Example of dynamic polymorphism:
    -virtual function
Q#5
  -Interface inheritance allows derived classes to implement their own version
   of the base class's virtual function(s). This is shown in DrawShape(), which
   calls Move() and UpdateDimensions(), one of which is derived from a base
   class function. The virtual UpdateDimensions() allows derived objects
   to have their own implementation and reflect the necessary changes.
*******************************************************************************/
