#include <stdio.h>

int *sum(int a, int b);

int main(int argc, char const *argv[])
{
    const int len = 3;
    int arr1[4] = {1, 12, 13, 14};
    int arr2[4] = {2, 22, 23, 24};
    int arr3[4] = {3, 32, 33, 34};

    int *m[3] = {arr1, arr2, arr3};

    int i = 0;
    int row = 0;
    int col = 0;

    int rsize = sizeof m / sizeof m[0];
    int csize = sizeof arr1 / sizeof arr1[0];
    printf("rsize=%d, csize=%d \n", rsize, csize);

    // printf("m=%d, m[0]=%d, m[0][0]=%d \n",sizeof m, sizeof m[0], sizeof m[0][0]);

    for (row = 0; row < rsize; row++)
    {
        for (col = 0; col < csize; col++)
        {
            printf("%d ", m[row][col]);
            m[row][col] = i;
            i++;
            // printf("m[%d][%d]=%d ", row, col, m[row][col]);
        }
        printf("\n");
    }

    return 0;
}