#include <stdio.h>
#include <string.h>

void empty_line();
void swap(int *pa, int *pb);
void print_arr(int *arr, int len);
void print_char_arr(char *arr, int len);
void scan_arr(int arr[], int size);
char to_lowercase(char c);
char *my_gets(char *str, int size);
char *my_gets_eof(char *str, int size);

int main(int argc, char const *argv[])
{
    int age;
    char name[20];

    printf("Enter age [90\\n]: ");
    scanf("%d", &age);


    printf("scanf getchar gets fgets 표준 입력 버퍼 공유 Enter => \\n이 다음으로 넘어간다 \n");
    printf("\\n 플러싱 필요: getchar() scanf('percent*c') fget'c'(stdin) 사용\n");
    
    getchar();
    // scanf("%*c");
    // fgetc(stdin);

    printf("Enter name [\\n]: ");
    gets(name);
    printf("age: %d name: %s \n", age, name);

    return 0;
}

char *my_gets_eof(char *str, int size) {
    printf("using getchar until EOF:: \n");
    
    int ch;
    int i = 0;
    while (i < size - 1) {
        ch = getchar();
        
        if (ch == '\n') {
            continue;
        }

        if (ch == EOF) {
            break;
        }
        i++;

        str[i] = ch;
        printf("printf:: %c: %d \n", *(str + i), i);
    }

    // str[size - 1] = '\0';
    str[i] = '\0';
    printf("size: %d, i: %d \n", size - 1, i);


    return str;
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
