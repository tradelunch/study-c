#include <stdio.h>

void empty_line();
void swap(int *pa, int *pb);
void print_arr(int *arr, int len);
void scan_arr(int arr[], int size);
char to_lowercase(char c);

int main(int argc, char const *argv[])
{
    int x, y;
    char z;
    x = getchar();
    y = getchar();
    z = getchar();
    printf("x: %c %d, y: %c %d \n", x, x, y, y);
    empty_line();

    putchar(x);
    putchar(y);
    
    putchar('z');
    putchar(':');
    putchar(' ');
    putchar(z);
    putchar(' ');
    putchar('<');
    putchar('\n');

    // int 사용하는 이유
    //  -1 = 11111111 11111111 11111111 11111111
    // 255 = 00000000 00000000 00000000 11111111 
    printf("마지막 11111111은 같아서 -1과 255를 구분하지 못 한다 \n");
    printf("ctrl + z는 -1로 반환 문자의 입력을 끝내기 것 \n");
    printf("키보드 입력 시 상관 없다. ASCII 0-127은 -1과 겹치지 않는다 \n");
    printf("파일 읽을 때 반환하는 값이 255라면 파일의 데이터를 모두 읽은 후 반환하는 -1과 구분 불가능 \n");
    printf("why? 1 byte 공간에서 255와 -1은 표현하는 비트열 11111111으로 같기 때문이다 \n");


    return 0;
}

void empty_line()
{
    printf("\n");
}

void swap(int *pa, int *pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void print_arr(int *parr, int len)
{

    int i = 0;
    for (i = 0; i < len; i++)
    {
        // printf("*(parr + %d) = %d \n", i, *(parr + i));
        printf("arr[%d] = %d \n", i, parr[i]);
    }
}

void scan_arr(
    int parr[],
    // int *parr,
    int size)
{
    printf("int parr[], int *parr: int parr[100001] 의미 없다 => 컴파일 시 *parr 로 다 바뀜 \n");

    int i = 0;
    for (i = 0; i < size; i++)
    {
        scanf("%d", parr + i);
    }
}

char to_lowercase(char c) {
    char small;

    if (('A' <= c) && (c <= 'Z')) {
        small = c + ('a' - 'A');
    } else {
        small = c;
    }

    printf("c: %c, small: %c \n", c, small);

    return small;

}