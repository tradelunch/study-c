#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("&arr arr을 알아보자 \n");

    printf("참고 ch16-3: pi = (int *)malloc(size * sizeof(int)); \n");

    int arr[3][4] = {{1, 2, 3, 4}, {21, 22, 23, 24}, {31, 32, 33, 34}};
    int (*parr)[4]; // &arr
    parr = arr;

    printf("괄호가 있으면 int[4]를 가리키는 포인터 4개 공간을 가진 포인터들을 생성한다. \n");
    printf("*(parr[2] + 3)=%d \n", *(parr[2] + 3));
    printf("*(parr[0] + 0)=%d \n", *(parr[0] + 0));
    printf("*(parr[1] + 0)=%d \n", *(parr[1] + 0));
    printf("*(parr[2] + 0)=%d \n", *(parr[2] + 0));
    printf(" \n");



    printf("괄호() 가 없으면 pinter를 담음 배열 >> *parr[3] 포인터가 3개인 배열 \n");
    int *parr2[3];
    // parr2[0] = arr[0];
    parr2[0] = &arr[0];
    parr2[1] = arr[1];
    parr2[2] = arr[2];

    printf("parr2=%u, arr=%u \n", parr2[1][0], arr);

    printf(" \n");
    printf(" \n");

    return 0;
}