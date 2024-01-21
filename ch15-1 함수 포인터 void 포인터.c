#include <stdio.h>

int sum(int, int);
int *sum_address(int, int);

int main(int argc, char const *argv[])
{

    int a = 10;
    int *pa = &a;
    printf("a: %d, pa: %ld, *pa: %d \n", a, pa, *pa);

    int (*fp)(int, int);
    int res;

    fp = sum;
    res = fp(10, 20);
    res = (*fp)(10, 20);

    printf("result: %d \n", res);

    return 0;
}

int sum(int a, int b)
{
    static int sum;
    sum += a + b;
    return sum;
}
