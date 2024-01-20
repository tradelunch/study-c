#include <stdio.h>
#include <string.h>

int main(void)
{
    char fruit[6] = "apple";
    printf("문자열은 char fruit[6]=\"apple\\0\" \%|s 사용, 배열로 선언 > 문자열 길이 + 1 cuz \\0 exists at the end null character: %s \n", fruit);
    printf("\n");
    
    printf("strcpy(배열 주소상수 배열명, \"새로운 문자열 like banana\") > fruit는 주소 상수 fruit=\"새로운 문자열\"은 에러를 내 뿜는다 \n");
    printf("\n");

    strcpy(fruit, "banana");
    printf("fruit > %s after strcpy \n", fruit);
    printf("\n");


    const double constDouble = 3.13131313;
    printf("상수: const 를 사용한 변수 선언 > %lf \n", constDouble);
    printf("\n");

    printf("예약어 int: 식별자 age > 식별자는 필요에 따라 만들어 사용하는 것 A-Z, a-z, 0-9, _, 숫자 시작x, 대문자-소문자 다름, 예약어는 식별자x \n");
    printf("\n");

    int notInitialized;
    printf("a is not initialized to 0 so value is %d \n", notInitialized);
    printf("\n");

    printf("문자형\n");
    printf("c for char, s for char[] \n");
    printf("\n");

    printf("정수형\n");
    printf("ud for byte\n");
    printf("d for int\n");
    printf("ld for long\n");
    printf("lld for long long\n");

    long ld = 1234;
    printf("ld print: %ld size: %d \n", ld, sizeof(ld));
    long long lld = 123213234;
    printf("lld print: %lld size: %d \n", lld, sizeof(lld));
    printf("\n");

    printf("정수형 0 + 양수만\n");
    printf("u is for unsigned char short int\n");
    printf("lu is for unsigned long\n");
    printf("llu is for unsigned long long\n");
    printf("\n");

    printf("실수형 \n");
    printf("f for float \n");
    printf("lf for double \n");
    printf("Lf for long double \n");
    printf("\n");

    printf("입력: scanf > scanf(\"percent + d\" < 받아야 하는 값 타입 선언, &a < 변수명)\n");
    int scanA;
    scanf("%d", &scanA);
    printf("scanA: %d \n", scanA);
    printf("#define _CRT_SECURE_NO_WARNINGS << 아직은 잘 모르겠다 \n");
    printf("&: 엠 퍼센트는 변수의 주소를 구하는 operator \n");
    printf("\n");

    printf("나이와 키를 입력 하세요: \n");
    int scanAge;
    double scanHeight;
    scanf("%d%lf", &scanAge, &scanHeight);
    printf("\n");
    printf("1나이: %d, 키: %.1lf \n", scanA, scanHeight);
    printf("\n");
    
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    return 0;
}
