#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    printf("gets는 space, tab 넣기 가능 \n");

    char str[5];
    printf("문자열 입력 apple jam\\n: ");
    gets(str);
    printf("str: %s \n", str);
    printf("str: %d \n", getchar());

    return 0;
}
