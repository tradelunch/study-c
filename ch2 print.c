#include <stdio.h>

// char[] println(char[] arr) {

//     return arr;
// }

int main(void)
{

    // https://stackoverflow.com/questions/6462439/whats-the-difference-between-long-long-and-long
    int ii = 4; // 16 bits
    long l = 8; // 32 bits
    long long ll = 8; // 64 bits

    char cc = 1;
    short ss = 2;
    float ff = 4;
    double dd = 8;
    long double ldd = 12;

    // size
    printf("int: %lu \n", sizeof(ii));
    printf("long (int): %lu \n", sizeof(l));
    printf("long long (int): %lu \n", sizeof(ll));
    printf("c: %lu \n", sizeof(cc));
    printf("sh: %lu \n", sizeof(ss));
    printf("float: %lu \n", sizeof(ff));
    printf("double: %lu \n", sizeof(dd));
    printf("long double: %lu \n", sizeof(ldd));
    printf("\n");

    // long unsigned int
    printf("long assigned int for sizeof should use 'lu' with percent << \n");
    printf("\n");

    // unsigned long long int
    unsigned long int ulint = 8;
    printf("unsigned long int: %lu \n", sizeof(ulint));

    unsigned long long int ullint = 8;
    printf("unsigned long long int: %lu \n", sizeof(ullint));
    printf("\n");

    // integer: 4 bytes
    int d = 4444;
    printf("integer:: \%&d > integer >> %d \n", d);

    // float, double 8 bytes
    float f = 4444.4444f;
    printf("float:: \%&f > float >> %f \n", f);

    double lf = 2222.2222f;
    printf("float + 2 decimal:: \%&lf > 2 decimal float >> %.2lf \n", lf);

    long double d2 = 8888.8888;
    printf("long double:: \%&LF > long double >> %Lf \n", d2);

    printf("\n");

    printf("back space test char\\b a\bb \n");
    printf("alert \\a \a \n");

    printf("\n");

    //  * 진수 표현
    printf("\n");
    printf("10: 12 > 8: 014 > 16:0xc \n");

    // le 지수 표현
    printf("\n");
    printf("e > %.2le \n", 0.0000314);
    printf("e > %.7lf \n", 3.14e-05);

    // %c %s
    printf("\n");
    printf("c: %c \n", 'c');
    printf("s: %s \n", "ss");

    // ASCII code with char: 65 == 'A'
    printf("\n");
    printf("ASCII > %c \n", 65);

    //
    printf("\n");
    printf("\n");
    printf("\n");

    return 0;
}
