#include <stdio.h>

int *sum(int a, int b);

int main(int argc, char const *argv[])
{
    const int len = 3;
    const int size = 20;
    char *str[len];

    str[0] = "apple";
    str[1] = "bad";
    str[2] = "card";
    str[3] = "dog";
    str[4] = "egg";

    int i = 0;
    for (i = 0; i < 5; i++)
    {
        printf("%s \n", str[i]);
    }

    char *str2[] = {"a", "b", "b", "b", "e"};
    for (i = 0; i < 5; i++)
    {
        printf("%s \n", str2[i]);
    }

    return 0;
}