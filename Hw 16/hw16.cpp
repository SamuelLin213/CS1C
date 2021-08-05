// hw16.cpp
// to illustrate stl algorithms & function objects

/*************************************************************************
 * AUTHOR     : Samuel Lin
 * hw16       : stl algorithms & function objects
 * CLASS      : CS 1C
 * SECTION    : M-Th, 3-5:20pm
*************************************************************************/

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <list>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

using std::exception;
using std::length_error;
using std::vector;
using std::list;

// function & class definitions go into hw16.cpp:

// hw16.cpp

namespace hw16 {

//
// algorithm, function object example code adapted from Chapter 21
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

//--Q#1-------------------------------------------------------------------------

template<typename InputIterator, typename EqualityComparable>
InputIterator find(InputIterator first,InputIterator last, const EqualityComparable& val)
    // find the first element in [first,last) that equals value
{
    for (InputIterator p = first; p!=last; ++p)
        if (*p==val) return p;
    return last;
}

template<typename InputIterator, typename EqualityComparable>
InputIterator find_improved(InputIterator first,InputIterator last, const EqualityComparable& val)
    // find the first element in [first,last) that equals value
{
    while(first!=last)
    {
      if(*first==val)
        return first;
      ++first;
    }
    return last;
}

//--Q#2-------------------------------------------------------------------------

template<typename InputIterator, typename Predicate>
InputIterator find_if(InputIterator first, InputIterator last, Predicate pred)
    // find the first element in [first,last) that satisfies predicate
{
    while(first!=last)
    {
      if(pred(*first))
        return first;
      ++first;
    }
    return last;
}

//--Q#2-------------------------------------------------------------------------

bool even(int x)
{
  if(x % 2 == 0)
    return true;
  return false;
} // test for even ints via modulo

//------------------------------------------------------------------------------

bool less_than_31(int x)
{
  if(x < 31)
    return true;
  return false;
}

//------------------------------------------------------------------------------

int global_value; // the value to which less_than_v() compares its argument
bool less_than_v(int x)
{
  if(x < global_value)
    return true;
  return false;
}

//--Q#3-------------------------------------------------------------------------

struct Less_than
{
  public:
    Less_than(int x) :value{x} {}

    bool operator()(const int& y) const { return y < value; }

  private:
    int value;
};

//--Q#4-------------------------------------------------------------------------

struct Shape
{
    Shape(int id) : id{id} { }
    virtual ~Shape() { }
    virtual int calc_perimeter() const = 0;
    virtual int calc_area() const { return -1; }
    int id; // shape id
};

std::ostream& operator<<(std::ostream& os, const Shape& s)
{
    return os << s.id;
}

//------------------------------------------------------------------------------

struct Line : public Shape
{
    Line(int id, int p, int a) : Shape{id}, perimeter{p}, area{a} { }
    int calc_perimeter() const override { return perimeter; }
    int calc_area() const override { return area; }
    int perimeter; // shape type perimeter
    int area;      // shape type area
};

//------------------------------------------------------------------------------

struct Square : public Shape
{
    Square(int id, int p, int a) : Shape{id}, perimeter{p}, area{a} { }
    int calc_perimeter() const override { return perimeter; }
    int calc_area() const override { return area; }
    int perimeter; // shape type perimeter
    int area;      // shape type area
};

//--Q#4-------------------------------------------------------------------------

// comparisons for Shape* objects:

struct Cmp_by_id {
    bool operator()(const Shape* s1, const Shape* s2) const
    {
      if(s1->id < s2->id)
        return true;
      return false;
    } // dereference pointer, compare ids
};

//------------------------------------------------------------------------------

struct Cmp_by_perimeter {
    bool operator()(const Shape* s1, const Shape* s2) const
    {
      if(s1->calc_perimeter() < s2->calc_perimeter())
        return true;
      return false;
    } // dereference pointer, compare perimeter
};

//------------------------------------------------------------------------------

struct Cmp_by_area {
    bool operator()(const Shape* s1, const Shape* s2) const
    {
      if(s1->calc_area() < s2->calc_area())
        return true;
      return false;
    } // dereference pointer, compare area
};

//------------------------------------------------------------------------------

} // hw16

//------------------------------------------------------------------------------

using namespace hw16;

//
// algorithm, function object example code adapted from Chapter 21
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

int main()
{
    // console header
	cout << endl;
	cout << "************************************** " << endl;
	cout << "*            Running hw16            * " << endl;
	cout << "*      Programmed by Samuel Lin      * " << endl;
	cout << "*          CS1C 8/4 10pm             * " << endl;
	cout << "************************************** " << endl;
	cout << endl;

    // NOTE: uncomment code below once algorithm definitions Q#1-5 are complete

	// Q#1 - find algorithm

    vector<int> v = {40,5,4,3,2,-99,100,10,500,5}; // init stl vector of ints using initializer list

    // print vector v
    cout << "vector v: ";
    for (const auto& x : v) cout << x << " "; // use auto type deduction (x is an int),
    cout << endl << endl;                     // range-for-loop to print v

    int x = 5;
    vector<int>::iterator p = hw16::find(v.begin(),v.end(),x); // find value of 5 in v
    if (p!=v.end())
        cout << "find alg: found value of in vector v " << *p << endl << endl;
    else
        cout << "find alg: can't find value in vector v" << endl << endl;

	// Q#2 - find_if algorithm with predicates
                                                    // find first even int in v
    auto q = hw16::find_if(v.begin(),v.end(),even); // use auto-type deduction for output iterator q
    if (q!=v.end())                                 // (q is a vector<int>::iterator)
        cout << "find_if alg: found even value of in vector v " << *q << endl;
    else
        cout << "find_if alg: can't find even value in vector v" << endl;

    p = hw16::find_if(v.begin(),v.end(),less_than_31); // find first int in v less than 31
    if (p!=v.end())
        cout << "find_if alg: found less_than_31 value of in vector v " << *p << endl;
    else
        cout << "find_if alg: can't find less_than_31 value in vector v" << endl;

    global_value = -100;
    p = hw16::find_if(v.begin(),v.end(),less_than_v); // find first int in v less than -100
    if (p!=v.end())
        cout << "find_if alg: found less_than_v value of in vector v " << *p << endl << endl;
    else
        cout << "find_if alg: can't find less_than_v value in vector v" << endl << endl;

	// Q#3 - find_if algorithm with function objects

    p = hw16::find_if(v.begin(),v.end(),Less_than(4)); // find first int in v less than 4
    if (p!=v.end())
        cout << "find_if alg: found Less_than(4) value of in vector v " << *p << endl << endl;
    else
        cout << "find_if alg: can't find Less_than(4) value in vector v" << endl << endl;

	// Q#4 - sort algorithm + Shape class, function objects

    vector<Shape*> vs;
    vs.push_back(new Line{10,5,-1});       // store pointer to line1 in vs
    vs.push_back(new Line{5,10,-1});       // store pointer to line2 in vs
    vs.push_back(new Line{1,15,-1});       // store pointer to line3 in vs
    vs.push_back(new Square{100,400,625}); // store pointer to square1 in vs
    vs.push_back(new Square{101,40,100});  // store pointer to square2 in vs
    vs.push_back(new Square{102,60,225});  // store pointer to square3 in vs

    std::sort(vs.begin(),vs.end(),Cmp_by_id()); // sort shapes by id (using std sort algorithm)
    cout << "shapes sorted by id: ";
    for (const auto x : vs) cout << *x << " "; // use auto type deduction (x is a Shape*),
    cout << endl << endl;                      // range-for-loop to print vs

    std::sort(vs.begin(),vs.end(),Cmp_by_perimeter()); // sort shapes by perimeter
    cout << "shapes sorted by perimeter: " << endl;
    for (const auto x : vs)
    {
        cout << "id " << *x;
        cout << ", perimeter " << x->calc_perimeter() << endl;
    }
    cout << endl;

    std::sort(vs.begin(),vs.end(),Cmp_by_area()); // sort shapes by area
    cout << "shapes sorted by area: " << endl;
    for (const auto x : vs)
    {
        cout << "id " << *x;
        cout << ", area " << x->calc_area() << endl;
    }
    cout << endl;

    // free all shapes
    for (Shape* pS : vs) delete pS; // delete all shape objects, otherwise memory will leak

    return 0;
}

//------------------------------------------------------------------------------

/*
// WRITTEN ANSWERS

// Q#1
  -EqualityComparable must support the == and != operations, while InputIterator
   must support pre and post increment, as well as the post increment and
   dereference operator.
*/
