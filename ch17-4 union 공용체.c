#include <stdio.h>

union teacher
{
    int v;
    double grade;
};

int main(int argc, char const *argv[])
{
    printf("argc: %d\n", argc);

    union teacher a = {10, 4.3};
    union teacher a2 = {10};

    union teacher b = {.grade = 4.4};
    union teacher c = {.v = 100};
    union teacher d = {.v = 50, .grade = 3.9};

    return 0;
}