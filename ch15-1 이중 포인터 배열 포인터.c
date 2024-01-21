#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("**ppi는 * 첫 번째 별은 ppi가 가리키는 자료형이 포인터다,  \n");
    printf("** 두번째 별은 ppi 자신이 포인터다  \n");
    printf("int a; \npi = &a; \nppi = &pi; \n");
    printf("\n");
    
    printf("*pi = 10 > int a 에 10을 할당\n");
    printf("\n");

    printf("포인터를 변수명으로 쓰면 그 안의 값이 됩니다 \n");
    printf("포이넡에 & 연산을 하면 포인터 변수의 주소가 됩니다 \n");
    printf("포인터 * 연산은 화살표를 따라값니다 \n");
    printf("\n");

    printf("(int **) 타입 ppi 는 변수명 \n");
    printf("&ppi 는 (ppi *) 포인터가 저장된 주소 \n");
    printf("*ppi (ppi *)가리키는 값 > 즉 pi 포인터 주소 \n");
    printf("**ppi ppi가 가리키는 대상 pi 포인터 주소 이고 이때 이 pi 포인터가 가리키는 주소 &a 이다 \n");
    printf("\n");
    
    printf("(double *) db > 에서 포인터 크기는 4 bytes why? \n");
    printf("double은 포인터가 가리키는 자료형\n");
    printf("(void *) (int *) (double *) 은 포인터는 주소값만을 저장하는 변수 > 이 주소값 크기(주소 값x)가 포인터 크기\n");
    printf("(type *)이 가리키는 주소값 길이가 4 bytes면 포인터 크기는 4 bytes\n");
    printf("(type *)이 가리키는 주소값 길이가 8 bytes면 포인터 크기는 8 bytes\n");
    printf("\n");
    
    printf("*pi = 10 > a = 10\n");
    printf("**ppi = 10 > *pi = 10 > a = 10 \n");
    printf("\n");

    int **ppi;
    int *pi;

    int a;
    pi = &a;
    ppi = &pi;

    return 0;
}