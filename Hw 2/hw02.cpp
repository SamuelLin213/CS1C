#include "cardDeckClass.h"
using namespace std;

int main()
{
  int iterations = 0;

  cardDeckClass originalDeck;
  originalDeck.initializeCards();

  cardDeckClass newDeck = originalDeck;
  newDeck.perfectShuffle();
  iterations++;

  cout << endl << endl;

  while(!originalDeck.compareTo(newDeck))
  {
    newDeck.perfectShuffle();
    iterations++;
  }

  cout << iterations << " iterations needed." << endl;
  return 0;
}
