#include "cardDeckClass.h"
using namespace std;

class cardDeckClass;

typedef enum{CLUBS, DIAMONDS, HEARTS, SPADES} suits;
typedef enum {ACE, KING, QUEEN, JACK, TEN, NINE, EIGHT, SEVEN, SIX, FIVE,
  FOUR, THREE, TWO} ranks;

cardDeckClass::cardDeckClass()
{
  int index = 0;

  for(int st = CLUBS; st <= SPADES; st++){
    for(int rk = ACE; rk <= TWO; rk++){
      deck[index].suit = suits(st);
      deck[index].rank = ranks(rk);

      index++;
    }
  }

}
void cardDeckClass::print()
{
  string rankStr[13] =
  {
    "ace", "king", "queen", "jack", "10", "9", "8", "7", "6", "5", "4", "3", "2"
  };
  string suitStr[4] =
  {
    "clubs", "diamonds", "hearts", "spades"
  };
  int index = 0;

  for(int st = CLUBS; st <= SPADES; st++){
    for(int rk = ACE; rk <= TWO; rk++){
      cout << rankStr[(static_cast<int>(deck[index].rank))] << " of ";
      cout << suitStr[(static_cast<int>(deck[index].suit))] << endl;

      index++;
    }
  }
}
