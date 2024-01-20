#include <stdio.h>

void empty_line();
void swap(int *pa, int *pb);
void print_arr(int *arr, int len);
// void scan_arr(int *parr, int size);
void scan_arr(int arr[], int size);

int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 3, 4, 5};
    // int parr = &arr; // ok
    int *parr = arr;
    empty_line();

    printf("insert arr elements: \n");
    scan_arr(arr, 5);
    print_arr(&arr, 5);
    empty_line();

    print_arr(arr, 5);
    empty_line();

    print_arr(parr, 5);
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

    // *parr은 넘어오는 arr 첫 번째 주소값을 넘겨 받는다
    printf("*parr은 넘어오는 arr 첫 번째 엘리머트의 주소값을 넘겨 받는다 \n", len);

    printf("arr len: %d \n", len);
    const int newLen = sizeof parr / sizeof parr[0]; // sizeof arr > pinter size
    printf("arr new len: %d \n", newLen);
    printf("sizeof arr: %u, sizeof arr[0], %u, sizeof *(arr + 0): %u, sizeof *arr: %u \n", sizeof parr, sizeof parr[0], sizeof *(parr + 0), sizeof *parr);
    printf("sizeof parr 은 parr이 가리키는 주소값 크기: \n", sizeof parr);

    int i = 0;
    for (i = 0; i < len; i++)
    {
        // printf("*(parr + %d) = %d \n", i, *(parr + i));
        printf("arr[%d] = %d \n", i, parr[i]);
    }
}

// void scan_arr(int *parr, int size)
void scan_arr(int parr[], int size)
{
    printf("int parr[], int *parr: int parr[100001] 의미 없다 => 컴파일 시 *parr 로 다 바뀜 \n");

    int i = 0;
    for (i = 0; i < size; i++)
    {
        scanf("%d", parr + i);
    }
}