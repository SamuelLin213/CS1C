#include "cardDeckClass.h"
using namespace std;

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
  int iterations = 0;

  cardDeckClass originalDeck;
  cout << "Initial deck: " << endl;
  originalDeck.printCards();

  cardDeckClass newDeck = originalDeck;
  newDeck.perfectShuffle();
  cout << endl << "Deck after 1 perfect shuffle:" << endl;
  newDeck.printCards();
  iterations++;

  while(!originalDeck.compareTo(newDeck))
  {
    newDeck.perfectShuffle();
    iterations++;
  }
  cout << endl << "Final deck: " << endl;
  newDeck.printCards();

  cout << endl << iterations << " iterations needed." << endl;
  return 0;
}
