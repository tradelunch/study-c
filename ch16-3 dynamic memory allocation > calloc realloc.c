#include <stdio.h>
#include <stdlib.h> // for malloc, free

int main(int argc, char const *argv[])
{

    printf("void *calloc(unsigned int, unsigned int); \n");
    printf(">> 동적할당, 할당 공간 0 초기화 \n");
    printf("void *relloc(void *, unsigned int); \n");
    printf(">> 크기를 바꿔 재할당 \n");


    int size = 5;
    int *pi;
    int count = 0;
    int num;
    int i;


    pi = (int *)calloc(size, sizeof(int));
    
    if (pi == NULL) {
        printf("# 메모리가 부족합니다. \n");
        exit(1);
    }

    while(1) {
        printf("양수만 입력하세요. \n");
        scanf("%d", &num);
        if (num <= 0) break;

        if (count == size) {
            size += 5;
            pi = (int *)realloc(pi, size * sizeof(int));
        }
        pi[count++] = num;
    }

    for (i = 0; i < count; i++) {
        printf("%d: %5d \n", i, pi[i]);
    }

    free(pi);

    return 0;
}