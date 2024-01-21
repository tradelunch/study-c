#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    char name[10];

    printf("Enter: ");
    scanf("%d", &age);
    int ch = getchar();

    printf("\n");
    printf("Enterd: age=%d, ch=[%c:%d] \n", age, ch, ch);
    printf("\n");

    printf("Enter 123 + Enter> age=123 ch=[%c:%u] \n", '\0', '\0');

    return 0;
}
