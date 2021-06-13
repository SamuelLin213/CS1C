#ifndef CARDDECKCLASS_H
#define CARDDECKCLASS_H

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

// enum suit {clubs, diamonds, hearts, spades};
// enum rk {ACE, KING, QUEEN, JACK, TEN, NINE, eight, seven, six, five, four,
//    three, two};

class cardDeckClass
{
  public:
    cardDeckClass();
    void printCards();
  private:
    typedef enum {CLUBS, DIAMONDS, HEARTS, SPADES} suits;
    typedef enum {ACE, KING, QUEEN, JACK, TEN, NINE, EIGHT, SEVEN, SIX, FIVE,
      FOUR, THREE, TWO} ranks;
    typedef struct
    {
      suits suit;
      ranks rank;
    } cards;
    cards deck[52];
};

#endif
