#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("&arr arr을 알아보자 \n");

    int arr[5] = {1, 2, 3, 4, 5};
    int *parr = arr; // &arr 

    printf("parr=%u, arr=%u \n", parr, arr);
    printf("arr=%u, &arr=%u \n", arr, &arr);
    printf("arr과 &arr 주소값은 같다 \n");
    printf(" \n");

    printf("but arr + 1, &arr + 1 연산은 다르다 \n");
    printf("arr + 1=%u 4차이(자료형 크기) &arr + 1=%u  \n", arr + 1, &arr + 1);
    printf("&arr + 1=%u  20차이(arr 배열은 4 bytes int * 5 = 20 bytes 그래서 그 다음 영역이 20차이)\n", &arr + 1);
    printf(" \n");
    
    *parr = &arr;
    printf("parr + 1=%u arr + 1=%u \n", parr + 1, arr + 1);
    printf(" \n");
    printf(" \n");

    return 0;
}