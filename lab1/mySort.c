#include <stdio.h>

void mySort(int array[], unsigned int num) {
    int i, j, temp; 
    // Let i = number of passes
    for (i = 0; i < num - 1; i++) {
        // Let j = index
        for (j = 0; j < num - 1 - i; j++) {
            // If array is greater than the one ahead of it, swap
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
