#include <stdio.h>
#include <string.h>
#include <assert.h>

void printArr(int *arr);

int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 3, 4, 5};

    int len = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    for (i = 0; i < len; i++) {
        printf("arr %d: %d \n", i, arr[i]);
    }

    for (i = 0; i < len; i++) {
        printf("insert arr[%d]: \n", i);
        // scanf("%d", &arr[i]);
    }


    //  문자열
    char str[80] = "apple";
    printf("read str: %s \n", str);

    printf("write str: \n", str);
    scanf("%s", str);

    len = sizeof(str) / sizeof(str[0]);
    for (i = 0; i < len; i++) {
        if (str[i] == '\0') { // null 문자
            break;
        }

        printf("str %d: %c \n", i, str[i]);
    }

    // strcpy
    strcpy(str, "gooooooo!");
    printf("read str: %s \n", str);


    return 0;
}

void printArr(int *arr) {
    int len = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    for (i = 0; i < len; i++) {
        printf("arr %d: %d \n", i, *(arr + i));
    }
    return 0;
}