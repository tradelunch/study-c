#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("문자 입력 받기\n");
    printf("문자 c 입력: \n");
    char c;
    scanf("%c", &c);
    printf("c: %c \n", c);
    printf("\n");

    printf("문자열 입력 받기\n");
    printf("문자 string 입력: \n");
    char str[10];
    scanf("%s", str);
    printf("str: %s \n", str);
    printf("\n");
    
    printf("if length is 10 > 영어는 9자, 한글은 4자 \n");
    printf("\n");

    return 0;
}
