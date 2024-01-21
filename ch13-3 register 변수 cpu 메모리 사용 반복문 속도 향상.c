#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("전역 변수는 register 변수로 선언 불가능 \n");
    printf("register 변수는 주소 못 구한다 \n");
    printf("register 사용 여부는 컴파일러가 결정한다 \n");

    register int i = 0;
    auto int sum = 0;

    for (i = 0; i < 10000; i++) {
        sum += i;
    }

    printf("sum=%d \n", sum);
    return 0;
}
