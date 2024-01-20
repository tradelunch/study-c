#include <stdio.h>

/**
 * pinter is a 변수가 저장된 메모리 주소를 가리키는 것
 * 변수가 메모리 어디에 할당되어 있는지 그 할당된 주소, 공간을 기억하는 변수
 * 
 * 
 * pointer -> memory address -> value
 */
int main(int argc, char const *argv[])
{

    // scanf("%c", &c);
    // scanf("%d", &d);

    int a = 5;
    int *pa = &a;

    // int a: 5, pointer pa: 4294958716 ~ 19 : 4 bytes assigned
    // int a: 5, pointer &a: 4294958716
    printf("int a: %d, pointer pa: %u \n", a, pa);
    printf("int a: %d, pointer &a: %u \n", a, &a);

    // int a: 5, pointer *pa: 5
    // int a: 5, pointer a: 5
    printf("int a: %d, pointer a: %u \n", a, a);
    printf("int a: %d, pointer *pa: %u \n", a, *pa);

    // int a: 5, pointer &a: 4294958716
    // int a: 5, pointer &pa: 4294958720
    printf("int a: %d, pointer &a: %u \n", a, &a);
    printf("int a: %d, pointer &pa: %u \n", a, &pa);
    
    
    printf("*pa == a: %d \n", a == *pa);

    int d = 1;
    int *pd = &d;
    scanf("%d", &d);
    printf("d = %d \n", d);
    
    scanf("%d", pd);
    printf("pd = %d \n", d);

    // 간접 참조 연산자: 포인터가 가리키는 변수를 사용할 때 * 를 붙여서 사용한다
    // 메모리 주소에 저장된 값을 불러온다
    *pd = 1000;
    printf("1000 > *pd = %d, d = %d \n", *pd, d);
    d = 1002;
    printf("1000 > *pd = %d, d = %d \n", *pd, d);

    // *pd == d 이다
    printf("1002 *pd = d: %d which is equal\n", d == *pd);

    scanf("%d", &*pd);
    printf("&*pd = %d \n", d);
    printf("&d == &*pd: %d, &d == &*pd: %d, &*pd == pd: %d > all equal \n", &d == pd, &d == &*pd, &*pd == pd);


    // 간접 참조 주소 상수화
    const int *pdi = &d;
    // *pdi = 100; // error
    // *pdi = 1991; 

    return 0;
}
