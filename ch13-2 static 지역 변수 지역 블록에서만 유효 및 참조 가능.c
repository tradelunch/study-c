#include <stdio.h>

void auto_func(void);
void static_func(void);

int global; // int initialized to 0;

int main(int argc, char const *argv[])
{
    auto_func();
    auto_func();


    printf("static int 정적 지역변수는 {} 블록 내에서만 참조 가능하지만  \n");
    printf("함수가 불릴 때 메모리에 남아서 매 호출마다 같은 값을 공유한다   \n");
    static_func();
    static_func();

    return 0;
}

void auto_func(void) {
    auto int a = 0;
    printf("auto_func:: a=%d \n", a);
}

void static_func() {
    static int a;

    a++;
    printf("static_func:: a=%d \n", a);
}
