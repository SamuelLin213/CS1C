#ifndef CIRCLECLASS_H
#define CIRCLECLASS_H

#include "shapeClass.h"
using namespace std;

class Circle: public Shape
{
  public:
    /**********************
    * default constructor
    * creates default object
    * pre-condition:
    *     <none>
    * post-condition:
    *     -creates Circle object with radius 0
    **********************/
    Circle(): r{0} {}

    /**********************
    * non-default constructor
    * creates non-default object
    * pre-condition:
    *     -int variable defined and passed in
    * post-condition:
    *     -creates Circle object with radius r
    **********************/
    Circle(int r) : r{r} {}

    /**********************
    * print function
    * prints circle radius
    * pre-condition:
    *     <none>
    * post-condition:
    *     -prints circle radius
    **********************/
    void Print();

    /**********************
    * UpdateDimensions function
    * Changes the radius of circle
    * pre-condition:
    *     -int variable defined and passed in
    * post-condition:
    *     -radius updated with paramter
    **********************/
    void UpdateDimensions(int r_, int);
  private:
    int r; //radius of circle 
};

#endif
