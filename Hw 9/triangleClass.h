#ifndef TRIANGLECLASS_H
#define TRIANGLECLASS_H

#include "shapeClass.h"
using namespace std;

class Triangle: public Shape
{
  public:
    /**********************
    * default constructor
    * creates default object
    * pre-condition:
    *     <none>
    * post-condition:
    *     -creates Triangle object with sides 0
    **********************/
    Triangle(): s1{0}, s2{0}, s3{0} {}

    /**********************
    * non-default constructor
    * creates non-default object
    * pre-condition:
    *     -int variable defined and passed in
    * post-condition:
    *     -creates Triangle object with
    *      parameter stored into sides
    **********************/
    Triangle(int s1_, int s2_, int s3_)
      : s1{s1_}, s2{s2_}, s3{s3_} {}

    /**********************
    * print function
    * prints Triangle sides
    * pre-condition:
    *     <none>
    * post-condition:
    *     -prints Triangle sides
    **********************/
    void Print();

    /**********************
    * UpdateDimensions function
    * Changes the sides of Triangle
    * pre-condition:
    *     -int variable defined and passed in
    * post-condition:
    *     -sides updated with paramter
    **********************/
    void UpdateDimensions(int s1_, int s2_, int s3_);

    /**********************
    * UpdateDimensions function
    * dud function; implement virtual for rectangle
    * pre-condition:
    *     -int variable defined and passed in
    * post-condition:
    *     <none>
    **********************/
    void UpdateDimensions(int, int) {}

    /**********************
    * calcPerimeter function
    * calculate triangle perimeter
    * pre-condition:
    *     <none>
    * post-condition:
    *     -perimeter returned
    **********************/
    int calcPerimeter();

    /**********************
    * calcArea function
    * calculate triangle area
    * pre-condition:
    *     <none>
    * post-condition:
    *     -area returned
    **********************/
    int calcArea();
  private:
    int s1; //side one
    int s2; //side two
    int s3; //side three
};

#endif
