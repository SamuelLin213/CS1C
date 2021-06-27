#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

vector<int> Lotto(const int, const int);
int myrandom (int i);

int main()
{
  srand ( unsigned ( std::time(0) ) );
  const int VALUES = 51;
  const int SPOTS = 6;

  vector<int> winners;
  winners = Lotto(VALUES, SPOTS);

  cout << "Your lottory card:" << endl;
  for(int z: winners)
  {
    cout << z << " ";
  }
  cout << endl;

  return 0;
}

vector<int> Lotto(const int randNum, const int spots)
{
  vector<int> winList(spots);
  vector<int> values(randNum);
  int index = 1;
  int x = 0;
  int z = 0;

  for(x = 0; x < randNum; ++x)
  {
    values[x] = index;
    index++;
  }

  for(z = 0; z < spots; ++z)
  {
    random_shuffle(values.begin(), values.end(), myrandom);
    winList[z] = values[0];
  }

  return winList;
}

int myrandom (int i)
{
  return rand()%i;
}
