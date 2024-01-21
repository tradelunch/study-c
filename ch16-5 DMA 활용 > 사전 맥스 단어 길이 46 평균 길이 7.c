#include <stdio.h>
#include <stdlib.h> // for malloc, free

int main(int argc, char const *argv[])
{
    const int size = 3;
    char temp[80];
    char *str[size];

    int i = 0;
    while (i < size) {
        printf("문자열 입력: ");
        gets(temp);

        const len = strlen(temp);
        str[i] = (char *)(malloc(len + 1));
        
        strcpy(str[i], temp);
        i++;
    }

    for (i = 0; i < size; i++) {
        // printf("> out: %s \n", str[i]);
        printf("> out: %s \n", *(str + i));
        free(str[i]);
    }


    return 0;
}
