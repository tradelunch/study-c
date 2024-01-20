#include <stdio.h>

void empty_line();
void swap(int *pa, int *pb);
void print_arr(int *arr, int len);
void scan_arr(int arr[], int size);
char to_lowercase(char c);

int main(int argc, char const *argv[])
{
    printf("scanf('_$c _$c'): _ 공백 입력 시 화이트스페이스 space, tab, enter 도 입력가능 \n");
    
    char x, y;
    scanf(" %c  %c", &x, &y);
    printf("x(%d): %c, y(%d): %c sizeof x: %u \n", x, x, y, y, sizeof x);
    empty_line();
    
    int z;
    printf("using int for char size is 4: \n");
    scanf(" %c", &z);
    printf("z: %d, %c sizeof z: %u\n", z, z, sizeof z);
    printf("int > char size is 4: \n");
    empty_line();

    
    empty_line();
    empty_line();
    empty_line();

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