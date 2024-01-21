#include <stdio.h>

int *sum(int a, int b);

int main(int argc, char const *argv[])
{
    printf("선언 int num[3][4] = { {1}, {1, 2}, {1, 2, 3} } \n");
    printf("선언 행 생략 가능: int num[][4] = { {1}, {1, 2}, {1, 2, 3} } \n");
    printf("선언 일반 배열 초기화: int num[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 } \n");
    printf("선언 일반 배열 초기화 생략: int num[3][4] = { 1, 2, 3, 4, 5, 6 } \n");
    printf("선언 일괄 초기화: int num[100][200] = { 0 } << 모두 0 초기화 \n");
    printf("선언 열은 생략 불가능: int num[][4] = { 1, 2, 3, 4, 5, 6 } \n");
    printf("1, 2, 3, 4\n5, 6, 0, 0\n");

    const int len = 5;
    // int m[len][len] = {{1}, {1, 2}, {1, 2, 3}, {1, 2, 3, 4}, {1, 2, 3, 4, 5}};
    int m[len][len];

    printf("m > total: %ld \n", sizeof m / sizeof m[0][0]);
    printf("m > row: %ld \n", sizeof m / sizeof m[0]);
    printf("m > col: %ld \n", sizeof m[0] / sizeof m[0][0]);

    int i = 0;
    int row = 0;
    int col = 0;
    for (row = 0; row < len; row++)
    {
        for (col = 0; col < len; col++)
        {
            printf("%d ", m[row][col]);
            m[row][col] = i;
            i++;
            // printf("m[%d][%d]=%d ", row, col, m[row][col]);
        }
        printf("\n");
    }

    printf("m[len][len]는 직선상 메모리에 할당 \n");
    printf("8번째 행: (8 - 1) / %d=%d \n", len, (8 - 1) / len);
    printf("8번째 열: (8 - 1) mod %d=%d \n", len, (8 - 1) % len);
    printf("8번째 열: m[(8 - 1) / %d][(8 - 1) mod %d]=%d \n", len, len, m[(8 - 1) / len][(8 - 1) % len]);

    return 0;
}