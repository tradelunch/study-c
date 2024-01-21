#include <stdio.h>
#include <string.h>
#include <assert.h>

int my_strcmp(char *ps1, char *ps2);

int main(int argc, char const *argv[])
{
    char str[80] = "hello world";

    printf("str: %s\n", str);
    printf("> 1: %d \n", my_strcmp(str, "hello "));
    // assert(my_strcmp(str, "hello ") == 1);

    printf("> 0: %d \n", my_strcmp(str, "hello world"));
    // assert(my_strcmp(str, "hello world") == 1);
    
    printf("> -1: %d \n", my_strcmp(str, "hello worldaaaaaaaaa"));
    // assert(my_strcmp(str, "hello worldaaaaaaaaa") == 1); 

    return 0;
}

int my_strcmp(char *ps1, char *ps2)
{

    // while (1)
    // {
    //     if (*ps1 == *ps2)
    //     {
    //         ps1++;
    //         ps2++;
    //     }
    //     else if (*ps1 < *ps2)
    //     {
    //         return -1;
    //     }
    //     else if (*ps1 > *ps2)
    //     {
    //         return 1;
    //     }

    //     if (*ps1 == '\0')
    //     {
    //         return -1;
    //     }
    //     else if (*ps2 == '\0')
    //     {
    //         return 1;
    //     }
    // }

    // return 0;

    while ((*ps1 == *ps2) && (*ps1 != '\0'))
    {
        ps1++;
        ps2++;
        printf("[%c:%c][%u,%u] ", *ps1, *ps2, *ps1, *ps2);
    }
    printf("\n=> [\\0 is euqal to 0 in integer] : ");

    // \0 == 0
    if (*ps1 < *ps2)
    {
        return -1;
    }
    else if (*ps1 > *ps2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
