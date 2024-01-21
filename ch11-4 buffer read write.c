#include <stdio.h>

void empty_line();
void swap(int *pa, int *pb);
void print_arr(int *arr, int len);
void scan_arr(int arr[], int size);
char to_lowercase(char c);

int main(int argc, char const *argv[])
{
    char ch;
    int i;

    printf("Read ch 3: \n");
    // for (i = 0; i < 3; i++) {
    //     scanf("%c", &ch);
    //     printf("%c", ch);
    // }
    putchar('\n');
    putchar('\n');


    while(1) {
        scanf("%c", &ch);
        if (ch == '\n') break;
        printf("(c:%c) ", ch);
    }
    putchar('\n');

    printf("입력 중단: ctrl + d, ctrl + z or ctrl +z enter ctrl + z \n");
    printf("입력 중단: EOF \n");
    putchar('\n');

    int res;
    while(1) {
        res = scanf("%c", &ch);
        if (res == EOF) break;
        printf("(ASCII-%d:%c) ~\n", ch, ch);
    }
    putchar('\n');
    putchar('\n');

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