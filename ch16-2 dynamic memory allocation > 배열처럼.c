#include <stdio.h>
#include <stdlib.h> // for malloc, free

int main(int argc, char const *argv[])
{

    printf("(int *)malloc(5 * sizeof(int)); \n");


    int size = 5;
    int *pi;

    pi = (int *)malloc(size * sizeof(int));
    
    if (pi == NULL) {
        printf("# 메모리가 부족합니다. \n");
        exit(1);
    }

    int i = 0;
    for (i = 0; i < size; i++) {
        printf("enter: (pi + %d): %d: ", i, i);
        scanf("%d", (pi + i));
        printf("enter: &pi[%d] %d: ", i, i);
        scanf("%d", &pi[i]);
    }

    for (i = 0; i < size; i++) {
        printf("print %d: %d \n", i, pi[i]);
    }


    free(pi);

    return 0;
}
