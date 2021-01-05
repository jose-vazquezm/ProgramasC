// Optimized implementation of Bubble sort 
#include <stdio.h> 
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// An optimized version of Bubble Sort 
void bubbleSort(int arr[]) 
{ 
   int i, j; 
   bool swapped; 
   for (i = 0; i < 10; i++) 
   { 
     swapped = false; 
     for (j = 0; j < 10-i; j++) 
     { 
        if (arr[j] > arr[j+1]) 
        { 
           swap(&arr[j], &arr[j+1]); 
           swapped = true; 
        } 
     } 
  
     // IF no two elements were swapped by inner loop, then break 
     if (swapped == false) 
        break; 
   } 
} 
  
/* Function to print an array */
void printArray(int arr[]) 
{ 
    int i; 
    for (i=0; i < 10; i++) 
        printf("%d ", arr[i]);
} 
  
// Driver program to test above functions 
int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 45, 7, 95};
    bubbleSort(arr); 
    printf("Sorted array: \n"); 
    printArray(arr); 
    return 0; 
} 
