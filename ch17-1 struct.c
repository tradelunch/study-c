#include <stdio.h>
#include <string.h>

struct student
{
    int num;
    double grade;
};

void print_student(struct student s);

int main(int argc, char const *argv[])
{
    printf("argc: %d\n", argc);
    printf("struct: 구조체, student: 구조체 명, s1: 구조체 instance 명 \n");
    printf("struct student s1; \n");
    printf("구조체명.멤버명 > s1.num or s1.grade > . is member access operator \n");
    printf("struct student => size int + double = 4 + 8 = 12 bytes \n");
    printf("however padding bytes > int + padding, double => 8 + 8 = 16 bytes \n");
    printf("char 1, byte 2, int 4, double 8 \n");
    printf(" \n");


    printf("padding bytes 계산 \n");
    printf("char num ch2 score double char \n");
    printf("c-ssc--- \n");
    printf("iiii---- \n");
    printf("dddddddd \n");
    printf("c------- \n");
    printf("총 8 * 4 = 32 bytes \n");
    printf(" \n");

    printf("최적화 padding bytes를 줄일 수 있다 \n");
    printf("char char short int double char \n");
    printf("ccssiiii \n");
    printf("dddddddd \n");
    printf("c------- \n");
    printf(" 8 * 3 = 24 bytes\n");
    printf("\n");

    struct student s1;
    s1.num = 2;
    s1.grade = 2.7;
    print_student(s1);

    printf("2--- \n");

    struct student s2 = { 20, 4.2 }; // 초기화
    printf("3: num=%d\n", s2.num);
    printf("3: grade=%.2lf\n", s2.grade);

    printf("2--- \n");
    printf("2--- \n");

    return 0;
}

void print_student(struct student s) {

    printf("s.num= %d\n", s.num);
    printf("s.grade= %.1lf\n", s.grade);
    printf("\n");
}
