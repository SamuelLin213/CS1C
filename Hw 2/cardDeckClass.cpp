#include "cardDeckClass.h"
using namespace std;

class cardDeckClass;

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


void cardDeckClass::printCards()
{
  string rankStr[RANK_SIZE] =
  {
    "A", "K", "Q", "J", "10", "9", "8", "7", "6", "5", "4", "3", "2"
  };
  string suitStr[SUIT_SIZE] =
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
void cardDeckClass::perfectShuffle()
{
  cards left[HALF_DECK_SIZE];
  cards right[HALF_DECK_SIZE];

  for(int x = 0; x < HALF_DECK_SIZE; x++)
  {
    left[x].rank = deck[x].rank;
    left[x].suit = deck[x].suit;

    right[x].rank = deck[x+HALF_DECK_SIZE].rank;
    right[x].suit = deck[x+HALF_DECK_SIZE].suit;
  }

  for(int x = 0; x < HALF_DECK_SIZE; x++)
  {
    deck[x*2].rank = left[x].rank;
    deck[x*2].suit = left[x].suit;

    deck[x*2+1].rank = right[x].rank;
    deck[x*2+1].suit = right[x].suit;

  }
}

bool cardDeckClass::compareTo(cardDeckClass &other)
{
  for(int i = 0; i < DECK_SIZE; i++)
  {
    if( (this->deck[i].suit != other.deck[i].suit) || (this->deck[i].rank != other.deck[i].rank) )
    {
      return false;
    }
  }

  return true;
}

cardDeckClass::~cardDeckClass()
{

}
