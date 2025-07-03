betterSort takes an array, and the indeces of the array for which the elements needs to be sorted. mySort takes an array and the number of elements in this array. Therefore, you can invoke betterSort(array, 0, maxNumberOfElements-1) if the number of elements is greater than zero. If the number of elements is equal to zero, then there is no assurance the betterSort will return a proper error message so that's why I would check that before invoking betterSort.

The code would be something like:

void mySort(int array[], unsigned int num) {
 if (num > 0) {
        betterSort(array, 0, num - 1);
    }
}