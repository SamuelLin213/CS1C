#ifndef SHAPECLASS_H
#define SHAPECLASS_H

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Shape
{
  public:
    /**********************
    * default constructor
    * creates default object
    * pre-condition:
    *     <none>
    * post-condition:
    *     -creates Shape object with
    *      x and y coordinates of 0
    **********************/
    Shape() :x{0}, y{0} {}

    /**********************
    * non-default constructor
    * creates non-default object
    * pre-condition:
    *     -int variable defined and passed in
    * post-condition:
    *     -creates Shape object with
    *      x value of x and y value of y
    **********************/
    Shape(int x, int y) :x{x}, y{y} {}

    /**********************
    * print function
    * prints shape x/y coordinate
    * pre-condition:
    *     <none>
    * post-condition:
    *     -prints shape x/y coordinates
    **********************/
    void Print();

    /**********************
    * Move function
    * Changes x/y coordinates
    * pre-condition:
    *     -int variable defined and passed in
    * post-condition:
    *     -x/y coordinates updated with parameters
    **********************/
    virtual void Move(int x_, int y_){ x=x_; y=y_; }

    /**********************
    * UpdateDimensions function
    * Changes shape dimensions
    * pre-condition:
    *     -int variable defined and passed in
    * post-condition:
    *     -dimensions of shape updated
    **********************/
    virtual void UpdateDimensions(int, int) = 0;

    /**********************
    * UpdateDimensions function
    * Changes shape dimensions
    * pre-condition:
    *     -int variable defined and passed in
    * post-condition:
    *     -dimensions of shape updated
    **********************/
    virtual void UpdateDimensions(int, int, int) = 0;

    /**********************
    * calcPerimeter function
    * calculate shape perimeter
    * pre-condition:
    *     <none>
    * post-condition:
    *     -perimeter returned
    **********************/
    virtual int calcPerimeter() = 0;

    /**********************
    * calcArea function
    * calculate shape area
    * pre-condition:
    *     <none>
    * post-condition:
    *     -area returned
    **********************/
    virtual int calcArea() = 0;
  private:
    int x; //x-coordinate
    int y; //y-coordinate
};

#endif
