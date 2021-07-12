#ifndef RECTANGLECLASS_H
#define RECTANGLECLASS_H

#include "shapeClass.h"
using namespace std;

class Rectangle: public Shape
{
  public:
    /**********************
    * default constructor
    * creates default object
    * pre-condition:
    *     <none>
    * post-condition:
    *     -creates Rectangle object with
    *      length 0 and width 0
    **********************/
    Rectangle() : l{0}, w{0} {}

    /**********************
    * non-default constructor
    * creates non-default object
    * pre-condition:
    *     -int variable defined and passed in
    * post-condition:
    *     -creates Rectangle object with
    *      length l and width w
    **********************/
    Rectangle(int l, int w) :l{l}, w{w} {}

    /**********************
    * print function
    * prints rectangle length and width
    * pre-condition:
    *     <none>
    * post-condition:
    *     -prints rectangle length and width
    **********************/
    void Print();

    /**********************
    * UpdateDimensions function
    * Changes the length/width of Rectangle
    * pre-condition:
    *     -int variable defined and passed in
    * post-condition:
    *     -length and width updated with parameters
    **********************/
    void UpdateDimensions(int l_, int w_);
  private:
    int l; //length of rectangle
    int w; //width of rectangle
};

#endif
