#include <stdio.h>
#include <string.h>

int my_strlen(char *ps1);

int main(int argc, char const *argv[])
{
    char str[80] = "hello world";

    printf("str: %s\n", str);
    printf("str: %d \n", my_strlen(str));
    printf("str: %d \n", my_strlen("banana"));

    return 0;
}

int my_strlen(char *ps1) {
    int i = 0;

    while (*ps1 != '\0') {
        ps1++;
        i++;
    }

    return i;
}
