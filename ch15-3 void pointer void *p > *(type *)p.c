#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    char b = 'a';

    void *pp;

    pp = &a;
    printf("pp = &a: %d \n", *(int *)pp);
    
    pp = &b;
    printf("pp = &a: %c \n", *(char *)pp);

    return 0;
}
