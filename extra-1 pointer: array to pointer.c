#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *parr = arr; // This initializes parr to point to the first element of the array arr.
    *parr = &arr[0]; // same as above

    // this is different
    *parr = arr; // wrong! The type of &arr is int (*)[5] (pointer to an array of 5 integers), not int*

    return 0;
}
