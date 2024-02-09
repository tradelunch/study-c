#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr[5]; // Declare an array of 5 integer pointers

    // Allocate memory for integers and assign to pointers
    for (int i = 0; i < 5; i++) {
        arr[i] = (int *)malloc(sizeof(int));
        *arr[i] = i * 10; // Assign values to allocated memory
    }

    // Print the values
    for (int i = 0; i < 5; i++) {
        printf("Value at arr[%d] = %d\n", i, *arr[i]);
    }

    // Free allocated memory
    for (int i = 0; i < 5; i++) {
        free(arr[i]);
    }

    return 0;
}
