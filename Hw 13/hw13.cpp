#include "exceptionFull.h"
using namespace std;

int main()
{
  cout << "Testing passing assert:" << endl;
  assert(("Assert passed, you shouldn't see this", 1 < 2));



  cout << endl << "Testing failing assert:" << endl;
  assert(("Assert failed, you should see this", 1 > 2));

  return 0;
}
