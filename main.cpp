// main.cpp
// Assignment to generate and sorting arrays of random variables
// Author: Ekele Ahmed Bissallah Junior.
// ID:     19061498
// Date:   30/10/2019

#include <cstdlib>

using namespace std;

// include user header file for sorting
#include "sort.h"

int main()
{
  int min = 0;
  int max = 90;
  int length10 = 10;
  int length20 = 20;
  int length30 = 30;
  int randArr10[length10];  // array with 10 variables
  int randArr20[length20];  // array with 20 variables
  int randArr30[length30];  // array with 30 variables


  // make random 10 size array
  fillArray(randArr10, length10, min, max);
  // output random state
  printArray(randArr10, length10);
  // call sort function on 10 size array
  selectionSort(randArr10, length10);
  // output sorted state
  printArray(randArr10, length10);

  // make random 20 size array
  fillArray(randArr20, length20, min, max);
  // output random state
  printArray(randArr20, length20);
  // call sort function on 20 size array
  selectionSort(randArr20, length20);
  // output sorted state
  printArray(randArr20, length20);

  // make random 30 size array
  fillArray(randArr30, length30, min, max);
  // output random state
  printArray(randArr30, length30);
  // call sort function on 30 size array
  selectionSort(randArr30, length30);
  // output sorted state
  printArray(randArr30, length30);
  
  return EXIT_SUCCESS;
}
