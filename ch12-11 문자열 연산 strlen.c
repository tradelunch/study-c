#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str3[80] = "hello world";
    char str4[80] = "12345 56789";

    printf("str3: %s, size: %lu, len=%u \n", str3, sizeof str3, strlen(str3));
    printf("str4: %s size: %lu, len=%u \n", str4, sizeof str4, strlen(str3));

    return 0;
}
