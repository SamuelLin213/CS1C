#include "exceptionFull.h"
#include "exceptionEmpty.h"
#include "queueArr.h"
#include "queueType.h"
using namespace std;

int main()
{
  bool done = false;
  queueArr<int> queueInt(5);

  cout << "Testing passing assert:" << endl;
  assert(("Assert passed, you shouldn't see this", 1 < 2));

  do{
    try{
      cout << endl;
      queueInt.dequeue();
      for(int i = 0; i < 6; i++)
      {
        queueInt.enqueue(i+2);
      }
    }
    catch(ExceptionQueueIsFull full)
    {
      cout << "Testing ExceptionQueueIsFull: " << endl;
      cout << full.what() << endl;
      done = true;
    }
    catch(ExceptionQueueIsEmpty empty)
    {
      cout << "Testing ExceptionQueueIsEmpty: " << endl;
      cout << empty.what() << endl;
      queueInt.enqueue(1);
    }
    catch(...)
    {
      cout << "Testing general exception: " << endl << "Shouldn't see this!" << endl;
    }
  }while(done == false);

  cout << endl << "Testing failing assert:" << endl;
  assert(("Assert failed, you should see this", 1 > 2));

  return 0;
}
