#include <stdio.h>
#include <stdlib.h> // for malloc, free

int main(int argc, char const *argv[])
{

    printf("코드 영역, 스택, 기타 데이터 영역, 힙 \n");
    printf("코드 영역: 실행 파일 용 \n");
    printf("스택: 지역 변수 \n");
    printf("데이터 영역: 전역(global) 변수, 정적(static) 변수 영역 \n");
    printf("힙: 동적 할당 영역 \n");

    return 0;
}
