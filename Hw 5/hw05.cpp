#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

/**********************************************
* Name : Samuel Lin
* Date: June 27, 2021
* Class: CS1C, Summer Session 2021
* Assignment: Hw05 - STL Vectors
* Summary:
*	-A vector calls Lotto() and stores a specified
*  number of random numbers
* -The "lotto card" values are outputted
* INPUT:
*    <none>
* OUTPUT:
*   -int values in vector is outputted
**********************************************/


vector<int> Lotto(const int, const int); //forward declaration
int myrandom (int i); //returns random int

int main()
{
  srand ( unsigned ( std::time(0))); //seeds rand
  const int VALUES = 51; //represents possible values
  const int SPOTS = 6; //number of spots on lotto

  vector<int> winners; // lotto card vector
  winners = Lotto(VALUES, SPOTS); //returns vector object

  cout << endl << "Winner's lottory card: ";
  for(int z: winners) //loops through vector
  {
    cout << z << " "; //prints value
  }
  cout << endl;

  return 0;
}

vector<int> Lotto(const int randNum, const int spots)
{
  vector<int> winList; //stores lotto values
  vector<int> values; //stores all possible values

  int x = 0;
  int z = 0;

  cout << "Number of spots: " << spots << endl;
  cout << "Number of possible values: " << randNum << endl;

  for(x = 0; x < randNum; ++x) //stores possible values in the vector
  {
    values.push_back(x+1);
  }

  for(z = 0; z < spots; ++z)
  {
    random_shuffle(values.begin(), values.end(), myrandom); //randomly shuffles vector
    winList.push_back(values.at(0)); //adds first value of shuffled vector
  }

  sort(winList.begin(), winList.end()); //sorts vector in ascending order

  return winList;
}

int myrandom (int i)
{
  return rand()%i; //returns random int
}
