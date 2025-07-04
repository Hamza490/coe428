//Import Libraries
#include <stdio.h>
#include <stdlib.h>
#include "mySort.h"


int main(int argc, char * argv[]){
  
  int data[4]; // Initialize array of size 4
  int nDataItems; // Array Length
  int i; // Value of Array
  
  nDataItems = 4;

  //Hard coded values to sort
  data[0] = 40;
  data[1] = 30;
  data[2] = 20;
  data[3] = 10;

  mySort(data, nDataItems);

  for(i=0;i<nDataItems-1;i++){
    if(data[i]>data[i+1]){
      fprintf(stderr, "Sort error: data[%d] (= %d)"
              " should be <= data[%d] (= %d)- -aborting\n",
              i, data[i], i+1, data[i+1]);
          exit(1);
      }
  }

for(i = 0; i < nDataItems; i++) {
  printf("%d\n", data[i]);
}
  exit(0);
}