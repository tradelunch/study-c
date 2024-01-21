#include <stdio.h>

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
