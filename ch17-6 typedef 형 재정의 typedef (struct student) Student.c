#include <stdio.h>

struct student
{
    int num;
    double grade;
};

typedef struct student Student;

void print_student(Student s);

int main(int argc, char const *argv[])
{
    printf("argc: %d\n", argc);

    Student s1 = {100, 3.3};
    print_student(s1);

    return 0;
}

void print_student(Student s)
{

    printf("s.num= %d\n", s.num);
    printf("s.grade= %.1lf\n", s.grade);
    printf("\n");
}
