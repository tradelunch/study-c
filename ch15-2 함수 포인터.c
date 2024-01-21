#include <stdio.h>

void func(int (*fp)(int, int));
int sum(int, int);
int mul(int, int);
int max(int, int);

int main(int argc, char const *argv[])
{

    printf("1. sum \n");
    printf("2. mul \n");
    printf("3. max \n");
    printf("Enter selection: ");
    int sel;
    scanf("%d", &sel);

    switch(sel) {
        case 1: func(sum); break;
        case 2: func(mul); break;
        case 3: func(max); break;
        default:
            return 0;
    }


    return 0;
}

void func(int (*fp)(int, int)) {
    int a, b;
    int res;

    printf("두 정수 값을 입력 하세요: ");
    scanf("%d%d", &a, &b);

    res = fp(a, b);
    printf("결과: %d \n", res);
}

int sum(int a, int b)
{
    static int sum;
    sum += a + b;
    return sum;
}

int mul(int a, int b)
{

    return a * b;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
