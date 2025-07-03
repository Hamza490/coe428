//Import Libraries
#include <stdio.h>
#include <stdlib.h>
#include "mySort.h" 


int main(int argc, char * argv[]){
  int *data = NULL;                       //Pointer to data array (dynamic or static)
  int dataStatic[4] = {10, 20, 30, 40};   // Hardcoded default data array
  int nDataItems = 0;                     // Number of elements in data array
  int i;                                  // Loop Counter

  /* Uncomment this block to debug command line arguments
  
    for(int k = 0; k < argc; k++) {
      fprintf(stderr, "argv[%d] = %s\n", k, argv[k]);
    }

  */

  if(argc > 2){
    nDataItems = atoi(argv[1]);               // Convert first arg to array size
    data = malloc(nDataItems * sizeof(int));  // Allocate memory for dynamic array

    if (data == NULL) {
      fprintf(stderr, "Memory allocation failed\n");
      exit(1);
    } else if(argc != nDataItems+2){
        // argc should be invocation (1) + array size (1) + nDataItems
        fprintf(stderr, "Error: expected %d integers, but got %d arguments\n", nDataItems, argc - 2);
        exit(1);
    } else {
        // Fill dynamic array by converting command line args from strings to int
        for(i = 0; i < nDataItems; i++) {
          data[i] = atoi(argv[i+2]);  
        }
    }
  } else {
      fprintf(stderr, "Not enough arguments. Using Hard Coded Values\n");
      data = dataStatic;  // Point to static array when no input given
      nDataItems = 4;
    }

  // Sort the array using mySort function
  mySort(data, nDataItems);

  // Verify the array is sorted, otherwise report error and abort
  for(i = 0; i < nDataItems - 1; i++){
    if(data[i] > data[i + 1]){
      fprintf(stderr, "Sort error: data[%d] (= %d)"
              " should be <= data[%d] (= %d)- -aborting\n",
              i, data[i], i+1, data[i+1]);
      exit(1);
      }
  }

  // Print the sorted array to stdout
  for(i = 0; i < nDataItems; i++) {
    printf("%d\n", data[i]);
  }

  // Free dynamically allocated memory only if malloc was used
  if(data != dataStatic){
    free(data);
  }

  exit(0);
}