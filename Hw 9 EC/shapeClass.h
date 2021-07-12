#ifndef SHAPECLASS_H
#define SHAPECLASS_H

#include <iostream>
#include <iomanip>
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


    virtual void Move(int x_, int y_){ x=x_; y=y_; }

    /**********************
    * UpdateDimensions function
    * Changes x/y coordinates
    * pre-condition:
    *     -int variable defined and passed in
    * post-condition:
    *     -x/y coordinates updated with parameters
    **********************/
    virtual void UpdateDimensions(int, int) = 0;
  private:
    int x; //x-coordinate
    int y; //y-coordinate
};

#endif
