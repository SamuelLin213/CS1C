#ifndef HW01_H
#define HW01_H

#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <fstream>
using namespace std;

void printArr(int array[], int length);
void store(int array[], int length);
void sort(int array[], int length);
void writeFile(int array[], int length, ofstream &outData);
void readFile(int array[], int length, ifstream &inData);

#endif
