#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

//vector<int> Lotto(const int, const int);

int main()
{
  const int VALUES = 51;
  int y = 1;
  int x = 0;

  vector<int> winners;
  // winners = Lotto(51, 6);

  vector<int> values;

  cout << "iterating through vector" << endl;
  for(x = 0; x < VALUES; x++)
  {
    values.push_back(y);
    cout << values.at(y-1) << " ";
    y++;
  }

  // for(vector<int>::iterator x = winners.begin(); x != winners.end(); x++)
  // {
  //   random_shuffle(values.begin(), values.end());
  //   winners.push_back(values.front());
  // }
  //
  // cout << "Your lottory card:" << endl;
  // for(int z: winners)
  // {
  //   cout << z << " ";
  // }
  // cout << endl;

  return 0;
}

// vector<int> Lotto(const int spots, const int randNum)
// {
//   vector<int> winList(spots);
//   vector<int> values(randNum);
//   int y = 0;
//   unsigned int x = 0;
//
//   for(y = 1; y <= randNum; y++)
//   {
//     values.push_back(y);
//   }
//
//   for(x = 0; x < winList.capacity(); x++){
//     random_shuffle(values.begin(), values.end());
//     winList.push_back(values.front());
//   }
//
//   values.clear();
//
//   return winList;
// }
