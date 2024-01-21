#include <stdio.h>
#include <string.h>
#include <stdlib.h> // for malloc, free

int main(int argc, char const **argv)
{
    printf("argc: \n");
    printf("argv: **argv:  \n");
    printf("argv: *argv[]:  \n");

    int i = 0;
    for (i = 0; i < argc; i++) {
        printf("argv[%d]: %s \n", i, *(argv + i));

        printf("argv[%d]: %c < h\n", i, *(*(argv + i) + 1));
        printf("argv[%d]: %c < h\n", i, *(argv[i] + 1));
        printf("argv[%d]: %c < h\n", i, argv[i][1]);
    }
    printf("1--- \n");

    while (*argv != NULL) {
        printf("%s\n", *argv);
        argv++;
    }
    printf("2--- \n");


    return 0;
}
