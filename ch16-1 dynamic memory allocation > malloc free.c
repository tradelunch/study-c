#include <stdio.h>
#include <stdlib.h> // for malloc, free

int main(int argc, char const *argv[])
{

    printf("(int *)malloc(sizeof(int)); > (type *)를 해주는 이유? \n");
    printf("malloc 함수는 (void *)를 반환 \n");
    printf("따라서 (int *), (double *) 이렇게 형변환을 해줘어야 한다 \n");

    printf("malloc 함수 NULL 반환 여부 필히 확인 \n");
    printf("malloc 사용후 free(포인터);를 호출해 메모리 풀어줘야 한다 \n");

    int *pi;
    double *pd;

    pi = (int *)malloc(sizeof(int));
    
    if (pi == NULL) {
        printf("# 메모리가 부족합니다. \n");
        exit(1);
    }

    pd = (double *)malloc(sizeof(double));

    *pi = 10;
    *pd = 3.4;

    printf("정수형으로 사용: %d \n", *pi);
    printf("실수형으로 사용: %0.1lf \n", *pd);

    free(pi);
    free(pd);

    return 0;
}
