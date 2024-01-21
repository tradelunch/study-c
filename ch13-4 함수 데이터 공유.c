#include <stdio.h>

int *sum(int a, int b);

int main(int argc, char const *argv[])
{
    printf("값 복사 \n");
    printf("주소 전달 \n");
    printf("값 복사 사용하고 주소 전달은 원본값 변경 필요 시에만 사용 하자 \n");
    printf("char *create_str(char *origin); 이렇게 주소를 넘겨줘 사용 가능하다 \n");


    int a = 10;
    int b = 20;
    int *ret = sum(a, b);

    printf("sum: %d \n", *ret);
    printf("static 지역 변수는  &sum 주소반환 ok > 함수 실행이 끝나도 공가 유지 > 참조 가능 \n");
    printf("일반 지역 변수는 &sum 주소반환 x > 함수 실행이 끝나면 주소에 할당된 공간 회수 된다 > 참조 불가능 \n");

    return 0;
}

int *sum(int a, int b)
{
    static int sum;

    sum = a + b;

    return &sum;
}