#include <stdio.h>
#include <string.h>

char *my_strcat(char *ps1, char *ps2);

int main(int argc, char const *argv[])
{
    char str[80] = "hello world";

    my_strcat(str, "^999");

    printf("str: %s\n", str);
    printf("str: %s\n", my_strcat(str, "^dinosour"));

    return 0;
}

char *my_strcat(char *ps1, char *ps2) {
    char *psum = ps1;

    while (*ps1 != '\0') {
        ps1++;
    }

    while (*ps2 != '\0') {
        *ps1 = *ps2;
        ps1++;
        ps2++;
    }

    *ps1 = '\0';

    return  psum;
}
