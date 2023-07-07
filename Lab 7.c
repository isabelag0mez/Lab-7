// Bubble Sort: swaps adjacent elements repeatedly until the array is sorted (the data stored in the elements of the array are in ascending/increasing order in terms of their value). Create a pointer i to represent the index of the element in which we are at and compare its value to the adjacent element and swap if it is less than. 

#include <stdio.h>

void bubbleSort(int array[], int arraySize)
{
   // Declare a new array called numSwaps to keep track of the number of swaps for each element of the array called array.
   int i, j, temp, numSwaps[arraySize];
  
   for (i = 0; i < arraySize; i++)
   {
      numSwaps[i] =  0;
   }

   // Iterate through the array from element 0-8. Size of the array called array is 9.
   for (i = 0; i < arraySize-1; i++)
   {
       // Compare adjacent elements in the array called array.
       for (j = 0; j < arraySize-i-1; j++)
       {
           if (array[j] > array[j+1])
           {
              temp = array[j];
              array[j] = array[j+1];
              array[j+1] = temp;
              numSwaps[i]++;
           }
       }
   }
  
   for (i = 0; i < arraySize; i++)
      printf("The number of swaps needed for index %d: %d\n", i, numSwaps[i]);
}

int main()
{
   int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
   int arraySize = sizeof(array)/sizeof(array[0]);
   bubbleSort(array, arraySize);
}
