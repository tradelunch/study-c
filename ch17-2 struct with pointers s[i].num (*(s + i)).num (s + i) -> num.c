#include <stdio.h>
#include <string.h>

struct student
{
    int num;
    double grade;
};

void print_student(struct student s);

void print_student(struct student s)
{

    printf("s.num= %d\n", s.num);
    printf("s.grade= %.1lf\n", s.grade);
    printf("\n");
}

int main(int argc, char const *argv[])
{
    printf("argc: %d\n", argc);

    struct student s[3] = {{200, 3.5}, {100, 4.5}, {10, 4.3}};

    int i = 0;
    for (i = 0; i < 3; i++) {
        printf("s[i].num: %d, %.2lf \n", s[i].num, s[i].grade);
        printf("(*(s + i)).num: %d, %.2lf \n", (*(s + i)).num, (*(s + i)).grade);
        printf("(s + i) -> num: %d, %.2lf \n", (s + i) -> num, (s + i) -> grade);
        printf("s[i].num (*(s + i)).num (s + i) -> num-------- \n");
    }

    return 0;
}