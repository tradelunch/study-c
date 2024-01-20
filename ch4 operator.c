#include <stdio.h>
#include <string.h>
#include <assert.h>

int main(int argc, char const *argv[])
{
    printf("대입 연산자: =, 왼쪽 공간 = 오른쪽 값 \n");
    printf("산술 연산자: + - / * mod \n");
    printf("\n");

    printf("정수: 5 / 2 소수 버린다 > 나머지: floor 연산: %d \n", 5 / 2);
    printf("값 double 캐스팅: (double) 5 / 2 = %lf \n", (double) 5 / 2);
    printf("밑 double 캐스팅: 5 / (double) 2 = %lf \n", 5 / (double) 2);
    printf("실수: 5 / 2 = %.1lf \n", 5.0 / 2);
    printf("\n");
    
    printf("관계 연산자: < > <= >= == != \n");
    printf("\n");

    printf("논리 연산자: || && ! \n");
    printf("\n");

    int b = 1 < 2;
    printf("boolean true 1: %d \n", b);
    printf("boolean false 0: %d \n", 1 > 2);
    printf("\n");

    printf("컴퓨터는 어떻게 연산을 할까? \n");
    printf("a = 10, b = 20, sum = a + b: \n");
    printf("1. 'load' a to cpu register\n");
    printf("2. 'load' b to cpu register\n");
    printf("3. '연산' with ALU  a + b 후 register에 저장\n");
    printf("! register는 cpu 내 저장 장치 \n");
    printf("4. 연산 결과 30을 sum에 대입 'store' \n");
    printf("\n");
    
    printf("cpu 메모리를 register라고 한다 > 연산 후 결과를 임시 저장 \n");
    printf("register는 cpu 클럭과 1:1 동기화 RAM(메모리)에 비해 엄청 빠르다 \n");
    printf("그런데 register는 다음 연산을 위해 사용 > 휘발성 > Memory에 값을 옮겨서 저장해야 한다 \n");
    printf("\n");

    return 0;
}
