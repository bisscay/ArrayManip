#include <iostream>
#include <cstdlib>

// pre-processor macro for swap algorithm
#define SWAP(a,b) {int temp = a; a = b; b = temp;}

using namespace std;

/* pseudo-code to implement a SELECTION sort
* unsorted array randArr
* store length of array
* shift the random portion of the array away with each sort
* stop shift before larger value of the last sort (no need to check for the last value, its already sorted)
* make current index the minimum until a lower value is found
* get next index for comparison
* compare current minimum value to every other value in randArr
* store next index as minimum, if it is less that current minimum
* at the end of comparison, swap found minimum value with first value in current unsorted array
* sort function passes by reference and returns swapped values
*/

// selectionSort(arr[], length)
// returns a sorted array of random numbers
//
// param: int arr[] - array to be sorted
//        int length - length of array to be sorted
// return: void
void selectionSort(int arr[], int length)
{
  int i; // index of current value to be compared with other values
  int j; // index of values that compare with current value, holds next values
  int min; // index of least value after comparison between i and each j
  // shift the random portion of the array away with each sort
  // stop shift before larger value of the last sort
  for (i = 0; i < length-1; i++) { 
    // make current index the minimum until a lower value is found
    min = i;
    // get next index for comparison
    for (j = i+1; j < length; j++) {
      // compare current minimum value to every other value in array
      if (arr[j] < arr[min]) {
        // store next index as minimum, if it is less that current minimum
        min = j;
      }
    }
    // swap the found minimum value with first value in current unsorted array section
    SWAP(arr[min], arr[i]);
  }
}

/*
// swap(value1, value2)
// returns interchanged values from passed in variables
//
// param: int value1 - first variable
//        int value2 - second variable
// return: void
void swap(int &value1, int &value2)
{
  int temp = value1;
  value1 = value2;
  value2 = temp;
}
*/

// printArray(data, size)
// returns the values in the array
//
// param: int data[] - array of values
//        int size - size of array field
// return: void
void printArray(int data[], int size) 
{
  cout  << "[";                                                   
  for (int i = 0; i < size; i++) {
    // separate each value by "," unless at last variable
    if (i+1 == size) {
      cout << data[i];
    } else {
      cout << data[i] << ",";
    }
  }
  cout << "]" << endl;
  return;
}

// getRandom(min, max)
// returns a random values between min & max (both inclusive)
//
// param: int min - minimum random number
//        int max - maximum random number
// return: random number
int getRandom(int min, int max) 
{
  int range, Number, randN;
  // generate more random outcomes with current time as seed
  // srand(time(NULL));
  // get the limit for randomness
  range = max - min;                                                         
  // scale the range to include max
  Number = ++range; 
  // generate random value
  randN = rand()%Number;
  // scale to start from min
  randN += min;
  return randN;
}

// fillArray(data, size, min, max)
// returns an array of random values within min & max (both inclusive)
//
// param: int data[] - array of values
//        int size - size of array field
//        int min - minimum random number
//        int max - maximum random number
// return: void
void fillArray(int data[], int size, int min, int max) 
{
  // access each index in array
  for (int i = 0; i < size; i++) {
    // assign a random variable
    data[i] = getRandom(min, max);
  }
  return;
}
