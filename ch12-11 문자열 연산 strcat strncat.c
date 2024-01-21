#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str3[80] = "hello world / ";
    char str4[80] = "12345 56789 / ";

    strcat(str3, str4);

    printf("cat str3: %s, size: %lu \n", str3, sizeof str3);
    printf("cat str4: %s size: %lu \n", str4, sizeof str4);
    
    strncat(str3, str4, 5);
    printf("n cat str3: %s, size: %lu \n", str3, sizeof str3);
    printf("n cat str4: %s size: %lu \n", str4, sizeof str4);

    return 0;
}
