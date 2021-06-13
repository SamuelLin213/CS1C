#include "hw01.h"

int main()
{
  //random number generator(modern approach)
  const int range_from  = 100;
  const int range_to    = 999;
  random_device                  rand_dev;
  mt19937                        generator(rand_dev());
  uniform_int_distribution<int>  distr(range_from, range_to);

  typedef ofstream output;
  typedef ifstream input;
  int choice = 0;
  enum operation { SUM, TRIPLE, REVERSE};
  operation opr;
  int arr[10];
  int randNum = distr(generator);
  int hundreds = randNum / 100;
  int tens = randNum / 10 % 10;
  int ones = randNum % 10;
  string message = "";
  output outFile;
  outFile.open("output.txt");
  input inFile;
  inFile.open("output.txt");

  int sum = hundreds + tens + ones;
  int triple = randNum * 3;

  while(choice != 4){
    cout << "\033[2J\033[1;1H"; //clears terminal screen on Ubuntu Linux
    cout << "Random number generated: " << randNum << '\n';
    cout << "1. Sum the digits" << endl;
    cout << "2. Triple the number" << endl;
    cout << "3. Reverse the digits" << endl;
    cout << "4. Exit" << endl;

    cout << endl << "Enter a choice(1-4): ";
    cin >> choice;

    switch(choice){
      case 1:
        opr = SUM;
        break;
      case 2:
        opr = TRIPLE;
        break;
      case 3:
        opr = REVERSE;
        break;
    }
    if(choice == 4){
      break;
    }

    if(opr == SUM)
    {
      message = "Digits summed up! Sum: ";
      cout << message << sum;
    }
    else if(opr == TRIPLE)
    {
      message = "Integer tripled! Triple: ";
      cout << message << triple;
    }
    else if(opr == REVERSE){
      message = "Digits reversed! Reversed digits: ";
      cout << message << ones << tens << hundreds;
    }
    cin.ignore();
    cin.get();
    cout << "\033[2J\033[1;1H"; //clears terminal screen on Ubuntu Linux
  }

  cout << "\033[2J\033[1;1H"; //clears terminal screen on Ubuntu Linux
  cout << "10 random numbers stored:" << endl;

  for(int i = 0; i < 10; i++){
    arr[i] = distr(generator);
  }
  printArr(arr, 10);

  cout << endl << "Array sorted:" << endl;
  sort(arr, 10);
  printArr(arr, 10);

  cout << endl << "Writing to output file...";
  writeFile(arr, 10, outFile);

  cout << endl << endl << "Reading from output file...";
  int newArr[10];
  readFile(newArr, 10, inFile);

  cout << endl << endl << "Printing array read from file:" << endl;
  printArr(newArr, 10);

  return 0;
}

void readFile(int array[], int length, ifstream &inData)
{
  for(int i = 0; i < length; i++){
    inData >> array[i];
  }
}
void writeFile(int array[], int length, ofstream &outFile)
{
  for(int i = 0; i < length; i++){
    outFile << array[i] << endl;
  }
}
void printArr(int array[], int length)
{
  for(int i = 0; i < length; i++){
    cout << array[i] << " ";
  }
  cout << endl;
}
void sort(int list[], int length)
{
  for (int iteration = 1; iteration < length; iteration++)
  {
    for (int index = 0; index < length - iteration; index++)
    {
      if (list[index] > list[index + 1])
      {
        int temp = list[index];
        list[index] = list[index + 1];
        list[index + 1] = temp;
      }
    }
  }
}
