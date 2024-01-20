#include <stdio.h>

void empty_line();
void swap(int *pa, int *pb);
/**
 * pinter is a 변수가 저장된 메모리 주소를 가리키는 것
 * 변수가 메모리 어디에 할당되어 있는지 그 할당된 주소, 공간을 기억하는 변수
 *
 *
 * pointer -> memory address -> value
 */
int main(int argc, char const *argv[])
{

    int d = 10;
    int *pd = &d;

    printf("d = %d \n", d);
    printf("*pd = %d \n", *pd);

    d = 50;
    printf("d = 50; > *pd = %d, d = %d \n", *pd, d);

    *pd = 100;
    printf("*pd = 100; *pd = %d, d = %d \n", *pd, d);

    printf("\n");

    printf("size of d: %u \n", sizeof d);
    printf("size of *pd : %u \n", sizeof *pd);

    printf("size of pd : %u \n", sizeof pd);
    printf("size of d address: %u \n", sizeof &d);
    printf("size of &*pd : %u \n", sizeof &*pd);

    printf("\n");

    char c = '글';
    char *pc = &c;
    printf("size of c : %u \n", sizeof c);
    printf("size of *pc : %u \n", sizeof *pc);

    printf("size of &c : %u \n", sizeof &c);
    printf("size of &*pc : %u \n", sizeof &*pc);

    printf("\n");

    double dd = 3.14;
    double *pdd = &dd;

    printf("dd = %lf, *pdd = %lf \n", dd, *pdd);
    printf("dd = %lf, *pdd = %lf \n", dd, *pdd);
    empty_line();
    empty_line();

    int *pi;
    pi = (int *)pdd;
    printf("pdd casting to int, pi = (int *)pdd, pd : %d \n", *pi);
    empty_line();

    pdd = pi;
    printf("pi assigned: %lf \n", *pi); // 이상한 값 들어감, type should be equal
    printf("pdd : %lf \n", *pdd);

    empty_line();
    empty_line();
    empty_line();
    
    int a = 1000;
    int *pa = &a;
    int *pb = pa;
    printf("pa == pb: %d", pa == pb);
    *pb = 12;
    empty_line();

    printf("pa == pb: %d, %d, %d", pa == pb, *pa, *pb);
    empty_line();

    printf("pa == pb: %d, %u, %u", pa == pb, pa, pb);
    empty_line();

    int b = 999;
    pb = &b;
    printf("pa == pb: %d, %d, %d", pa == pb, *pa, *pb);
    empty_line();


    int *p;
    p = (int *) 100; //  p에 메모리 100번지 주소값 할당
    printf("p = %d", p);
    empty_line();

    // *p = 10; // p에 할당된 주소값 100번지부터 4 바이트 103번지까지 정수 10을 할당
    // printf("*p = %d", *p); // Error << system error cuz we do not know memory address 100 which is using
    empty_line();




    printf("swap:: ");
    empty_line();

    int x = 100;
    int y = 999;
    printf("x=%d, y=%d", x, y);
    empty_line();

    swap(&x, &y);
    printf("x=%d, y=%d", x, y);
    empty_line();

    printf("주소와 포인터는 상수! 와 변수! \n");
    printf("포인터 크기는 주소 크기와 같다 \n");
    empty_line();

    empty_line();



    return 0;
}

void empty_line() {
    printf("\n");
}

void swap(int *pa, int *pb) {
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}