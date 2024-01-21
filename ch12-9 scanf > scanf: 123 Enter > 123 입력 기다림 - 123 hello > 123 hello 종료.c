#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    char name[10];

    printf("Enter 123 hello: ");
    scanf("%d", &age);
    scanf("%s", name);

    printf("\n");
    printf("Enterd: age=%d, name=%s \n", age, name);
    printf("\n");

    printf("Enter 123 hello > age=123 name=hello \n");

    printf("Enter hello hello > age=100 name=hello \n");
    printf("17 + Enter 입력 시: age = 17, name = \\n \n");

    return 0;
}
