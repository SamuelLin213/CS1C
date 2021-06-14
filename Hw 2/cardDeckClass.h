#ifndef CARDDECKCLASS_H
#define CARDDECKCLASS_H

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;


const int DECK_SIZE = 52;
typedef enum {CLUBS, DIAMONDS, HEARTS, SPADES} suits;
typedef enum {ACE, KING, QUEEN, JACK, TEN, NINE, EIGHT, SEVEN, SIX, FIVE,
  FOUR, THREE, TWO} ranks;

class cardDeckClass
{
  public:
    void initializeCards();
    void printCards();
    bool compareTo(cardDeckClass &other);
    void perfectShuffle();
    void setRank(int i, ranks rk);

  private:
    typedef struct
    {
      suits suit;
      ranks rank;
    } cards;
    cards deck[DECK_SIZE];
};

#endif
