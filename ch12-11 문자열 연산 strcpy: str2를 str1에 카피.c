#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;

    char c[10] = "apple";
    char d[10] = "pie";

    printf("c: %s \n", c);
    printf("d: %s \n", d);

    strcpy(c, d); // d를 c에 카피

    printf("c: %s \n", c);
    printf("d: %s \n", d);

    char str1[3] = "33";
    char str2[6] = "55555";
    printf("str1: %s \n", str1);
    printf("str2: %s \n", str2);

    strcpy(str1, str2);

    printf("str1: %s, size: %lu \n", str1, sizeof str1);
    printf("str2: %s size: %lu \n", str2, sizeof str2);

    return 0;
}
