#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *dessert = "banana";

    while (*dessert != '\0') {
        putchar(*dessert);
        dessert++;
    }
    printf("\n");

    return 0;
}
