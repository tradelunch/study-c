#include <stdio.h>

int *sum(int a, int b);

int main(int argc, char const *argv[])
{
    const int len = 5;
    const int size = 20;
    char str[len][size];

    // char str[][size] = { "apple", "bear", "char", "long", "good" };

    printf("m > total: %ld \n", sizeof str / sizeof str[0][0]);
    printf("m > row: %ld \n", sizeof str / sizeof str[0]);
    printf("m > col: %ld \n", sizeof str[0] / sizeof str[0][0]);

    int i = 0;
    int row = 0;

    for (row = 0; row < len; row++)
    {
        printf(">> %s \n", str[row]);
    }

    for (row = 0; row < len; row++)
    {
        printf("Enter: ");
        scanf("%s", str[row]);
        printf(">> %s \n", str[row]);
    }
    
    return 0;
}