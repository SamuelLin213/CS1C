#include "cardDeckClass.h"
using namespace std;

/**********************************************
* Name: Samuel Lin
* Date: June 23, 2021
* Class: CS1C, summer session 2021
* Assignment: Hw02
* Summary:
*   - Class cardDeck represents standard deck
*     of cards. Both rank and suit is stored
*   - Functions can initialize, print, compare
*     and perform a perfect shuffle on the deck
*   - The number of perfect shuffle it takes
*     for the deck to return to its original
*     order is counted and printed
***********************************************/

/************************************
 * Hw02 - Deck of cards
 * ----------------------------------
 * A card class depicts a full deck of
 * cards and represents both the
 * suit and rank. A card object is
 * created, shuffled, and then
 * compared to the original deck.
 * The number of perfect shuffles
 * needed to return to the
 * original order is printed.
 * ----------------------------------
 * INPUT:
 *    <none>
 * OUPUT:
 *    1 - Original Deck
 *    2 - Deck perfectly shuffled once
 *    3 - Final deck - deck shuffled
 *        until original order
 *    4 - Number of shuffles printed
 ************************************/

int main()
{
  //counts iterations needed to return deck to original position
  int iterations = 0;

  //create new deck and print out initial values
  cardDeckClass originalDeck;
  cout << "Initial deck: " << endl;
  originalDeck.printCards();

  //creates second deck and copies original deck into it
  cardDeckClass newDeck = originalDeck;
  newDeck.perfectShuffle(); //performs 1 perfect shuffle
  cout << endl << "Deck after 1 perfect shuffle:" << endl;
  newDeck.printCards(); //deck after 1 perfect shuffle
  iterations++; //increase the iterations needed

  //keep perfect shuffling until the two decks are equal
  while(!originalDeck.compareTo(newDeck)) //uses member function to compare
  {
    newDeck.perfectShuffle();
    iterations++; //increases iteration count
  }
  cout << endl << "Final deck: " << endl;
  newDeck.printCards(); //prints out final deck

  cout << endl << iterations << " iterations needed." << endl; //prints out iterations needed
  return 0;
}
