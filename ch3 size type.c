#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("정수형: \n");

    char c = 65; // 'A'
    int d = 1234;
    long ld = 1234;
    long long lld = 123213234;
    printf("char c print: %c size: %ld \n", c, sizeof(c));
    printf("int d print: %d size: %ld \n", d, sizeof(d));
    printf("long ld print: %ld size: %ld \n", ld, sizeof(ld));
    printf("long long lld print: %lld size: %ld \n", lld, sizeof(lld));
    printf("\n");

    printf("실수형: \n");
    float f = .1234f;
    double db = .12345678;
    long double ldb = .1234567812345678;
    printf("float f print: %f size: %d \n", f, sizeof(f));
    printf("double dbprint: %lf size: %d \n", db, sizeof(db));
    printf("long double ldb print: %Lf size: %d \n", ldb, sizeof(ldb));
    printf("\n");
    
    char str[10] = "한글네";
    printf("char str[10]: %s, 사이즈: %ld \n", "abcd", sizeof(str));
    printf("%s 사이즈: %ld \n", "한글네자", sizeof("한글네자"));
    printf("%s 사이즈: %ld \n", "한글네자0", sizeof("한글네자0"));
    printf("%s 한글 한글자 크기 3 bytes + \\0 1 byte(종료문자): %ld \n", "ㄱ", sizeof("ㄱ"));
    printf("%s 한글 두글자 크기 6 bytes + \\0 1 byte: %ld \n", "ㄱㄴ", sizeof("ㄱㄴ"));
    printf("\n");

    printf("e 표현 \n");
    printf("e > %.2le \n", 0.0000314);
    printf("e > %.7lf \n", 3.14e-05);
    printf("\n");

    printf("float는 유효숫자 7, double은 유효숫자 15자리로 사용하는게 좋다 \n");
    printf("조심 long: 4 bytes 사용하는 이유 어떤 시스템에선 int가 4 bytes가 아닌 2bytes로 구현되어 있다 \n");
    printf("조심 long doulbe: 16 bytes gcc !!! 하지만 VC++ 에선 8 bytes일 수 있다 \n");
    printf("\n");

    return 0;
}
