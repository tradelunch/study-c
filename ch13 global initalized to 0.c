#include <stdio.h>

int global;
char ch_global;

int main(int argc, char const *argv[])
{
    int local;

    printf("local: ??: %d \n", local);
    printf("global: 0: %d \n", global);

    printf("ch_global: empty: %c \n", ch_global);

    return 0;
}