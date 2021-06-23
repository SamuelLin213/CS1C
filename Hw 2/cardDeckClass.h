#ifndef CARDDECKCLASS_H
#define CARDDECKCLASS_H

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

//constants values
const int DECK_SIZE = 52;
const int HALF_DECK_SIZE = 26;
const int RANK_SIZE = 13;
const int SUIT_SIZE = 4;

//enums that store rank and suit values
typedef enum {CLUBS, DIAMONDS, HEARTS, SPADES} suits;
typedef enum {ACE, KING, QUEEN, JACK, TEN, NINE, EIGHT, SEVEN, SIX, FIVE,
  FOUR, THREE, TWO} ranks;

class cardDeckClass
{
  public:

    //Default constructor
    //Creates default instance of cardDeckClass object
    //  Pre-condition:
    //    <none>
    //  Post-condition:
    //    -array of structs representing deck of card is initialized
    cardDeckClass();

    //Deconstructor
    //Destroys the array of structs
    //  Pre-condition:
    //    <none>
    //  Post-condition:
    //    -array of structs destroyed
    ~cardDeckClass();

    //Prints out all cards in the deck array
    //  Pre-condition:
    //    -array of structs initialized
    //  Post-condition:
    //    -array of structs outputted
    void printCards();

    //Compares two cardDeckClass objects for equality
    //  Pre-condition:
    //    -array of structs initialized
    //  Post-condition:
    //    -bool value returned
    bool compareTo(cardDeckClass &other);

    //Performs a perfect shuffle on the array of structs
    //  Pre-condition:
    //    -array of structs initialized
    //  Post-condition:
    //    -one perfect shuffle is performed on the array
    void perfectShuffle();

  private:
    typedef struct //struct containing 2 enum variables
    {
      suits suit; //represents suit of each card
      ranks rank; //represents rank of each card
    } cards;
    cards deck[DECK_SIZE]; //array of structs
};

#endif
