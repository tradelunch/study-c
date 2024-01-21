#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    char name[10];

    printf("Enter: ");
    scanf("%d", &age);
    gets(name);

    printf("\n");
    printf("Enterd: age=%d, name[0]=[%c:%d] \n", age, name[0], name[0]);
    printf("\n");

    printf("Enter 123 + Enter> age=123 name[0]=[%c:%u] \n", '\0', '\0');

    return 0;
}
