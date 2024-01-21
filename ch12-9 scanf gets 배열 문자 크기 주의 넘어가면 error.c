#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    char name[10];

    scanf("%d", &age);
    // scanf("%s", name);
    gets(name);

    printf("age: %d, name: %s \n", age, name);
    printf("17 + Enter 입력 시: age = 17, name = \\n \n");

    return 0;
}
