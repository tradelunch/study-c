#include <stdio.h>

void empty_line();
void swap(int *pa, int *pb);
void print_arr(int *arr, int len);
void print_char_arr(char *arr, int len);
void scan_arr(int arr[], int size);
char to_lowercase(char c);
char *my_gets(char *str, int size);

int main(int argc, char const *argv[])
{
    printf("apple stored at address: %p \n", "apple");
    printf("second char address: %p \n", "apple" + 1);
    printf("first char: %c \n", *"apple");
    printf("first char2: %c \n", "apple"[0]);
    printf("second char: %c \n", *("apple" + 1));
    printf("4th char: %c \n", *("apple" + 3));

    printf("*'apple' = 't' << Not Allowed to manipulate \n");

    char *dessert = "apple";
    printf("오늘 오후 디저트는: %s \n", dessert);

    dessert = "banana";
    printf("바뀐 디저트는: %s \n", dessert);
    printf("*dessert는 'banana'[0]를 가리킨다 \n", dessert);

    // *dessert = 'C';
    printf("*dessert = 'C'; << Not Allowed to manipulate \n");

    while (*dessert != '\0')
    {
        putchar(*dessert);
        dessert++;
    }

    putchar('\n');

    return 0;
}

char *my_gets(char *str, int size)
{

    int ch;
    int i = 0;

    ch = getchar();
    while (ch != '\n' && i < size - 1)
    {
        str[i] = ch;
        i++;
        ch = getchar();
    }

    str[i] = '\0';

    return str;
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
void print_char_arr(char *parr, int len)
{

    int i = 0;
    for (i = 0; i < len; i++)
    {
        // printf("*(parr + %d) = %d \n", i, *(parr + i));
        printf("arr[%d] = %c \n", i, parr[i]);
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

char to_lowercase(char c)
{
    char small;

    if (('A' <= c) && (c <= 'Z'))
    {
        small = c + ('a' - 'A');
    }
    else
    {
        small = c;
    }

    printf("c: %c, small: %c \n", c, small);

    return small;
}
