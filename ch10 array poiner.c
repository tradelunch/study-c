#include <stdio.h>

void empty_line();
void swap(int *pa, int *pb);
void print_arr(int *arr, int len);

int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 3, 4, 5};
    const int len = sizeof arr / sizeof arr[0];
    printf("len: %d ", len);
    empty_line();

    *(arr + 0) = 11;
    empty_line();

    print_arr(&arr, len);
    empty_line();

    *(arr + 1) = *(arr + 0) + 10;
    print_arr(&arr, len);
    empty_line();

    printf("arr + 2 = ");
    // scanf("%d", arr + 2);
    print_arr(&arr, len);
    empty_line();


    printf("arr[1] == *(arr + 2): %d ", arr[1] == *(arr + 1));
    empty_line();

    int *parr = arr; // &arr 을 붙이지 않는다
    printf("*parr == arr: %d \n", *parr == arr);
    printf("&*parr == parr == arr: %d", parr == &arr);
    empty_line();

    *parr = 999;
    *(parr + 1) = 1000;
    print_arr(&arr, len);
    empty_line();
    empty_line();


    printf("parr[3] = parr[2] + parr[1]:: ");
    parr[3] = parr[2] + parr[1];
    print_arr(&arr, len);
    empty_line();
    empty_line();

    printf("arr == &arr: %d \n", arr == &arr); // 배열은 arr &arr이 같다
    empty_line();
    empty_line();


    printf("pass parr as print_arr:: \n");
    print_arr(parr, len);
    // print_arr(*parr, len); // Error why? *parr은  arr[0], *(arr + 0) 주소를 가리키는 값
    print_arr(&*parr, len);
    empty_line();
    empty_line();


    int arr2[3];
    // int *parr2 = arr2;
    int *parr2 = &arr2; // arr2 0 번째 메모리 주소를 가리키는 포인터 parr2

    parr2[0] = 10;
    parr2[1] = 20;
    parr2[2] = 30;
    print_arr(arr2, 3);
    empty_line();


    parr2[2] = parr2[1] + parr2[1];
    *(parr2 + 2) =  *(parr2 + 1) + *(parr2 + 0);
    *(arr2 + 2) =  *(arr2 + 1) + *(arr2 + 0);
    arr2[2] = arr2[1] + arr2[0];
    printf("parr2[2] = parr2[1] + parr2[1]; %d \n", arr2[2]);
    printf("*(parr2 + 2) =  *(parr2 + 1) + *(parr2 + 0); %d \n", arr2[2]);
    printf("*(arr2 + 2) =  *(arr2 + 1) + *(arr2 + 0);%d \n", arr2[2]);
    printf("arr2[2] = arr2[1] + arr2[0]; %d \n", arr2[2]);
    print_arr(arr2, 3);
    empty_line();
    empty_line();

    *(parr2 + 2) = *(parr2 + 1) + parr2[0];
    print_arr(arr2, 3);
    empty_line();

    *(parr2 + 1) = *(parr2 + 2) + *parr2; 
    printf("*(parr2 + 2) = *(parr2 + 1) + <nononono>parr2; %d \n", arr2[1]);
    printf("*(parr2 + 2) = *(parr2 + 1) + *parr2; %d \n", arr2[1]);
    empty_line();

    printf("!!!! *parr2 == parr2[0]: %d \n", *parr2 == parr2[0]);
    empty_line();

    *parr2 = 999; // important *parr2 <<<  별 잘 붙이자
    printf("parr2 = 999; %d \n", parr2[0]);
    empty_line();
    empty_line();

    print_arr(arr2, 3);
    empty_line();


    printf("parr2++ 증감 연산자를 사용해 다음 주소로 이동 가능하다!!! ");
    int x = 0;
    for (x = 0; x < 3; x++) {
        printf("*parr2: %d \n", *parr2);
        parr2++;
    }
    empty_line();

    int *px = parr2;
    int *py = px + 2;
    printf("px: %u, py: %u \n", px, py);
    printf("py - px = %u \n", py - px);
    printf("py - px = 주소값(y) - 주소값(x)  /  sizeof (자료형 크기): \n", py - px);
    empty_line();

    printf("int arr[3]; 배열명 arr은 arr == &arr[0]: %u >> *arr == arr[0]: %u \n", arr == &arr[0], *arr == arr[0]);
    empty_line();

    printf("int arr[3]; int *parr = arr or &arr; =>  *parr = *(parr + 0) = *arr = *(arr + 0) = arr[0] = parr[0] \n");
    printf("*parr: %u = *(parr + 0): %u = *arr: %u = *(arr + 0): %u = arr[0]: %u = parr[0]: %u \n", *parr, *(parr + 0), *arr, *(arr + 0), arr[0], parr[0]);
    printf("1 *(++parr) %u \n",*(++parr));
    printf("2 *(++parr) %u \n",*(++parr));
    printf("3 *(++parr) %u \n",*(++parr));
    empty_line();

    printf("1 *(--parr) %u \n",*(--parr));
    printf("2 *(--parr) %u \n",*(--parr));
    printf("3 *(--parr) %u \n",*(--parr));
    empty_line();

    printf("4 *(--arr) 불가능 하다 why? arr은 상수!  \n");
    empty_line();

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    
    printf("5 --(*arr) 가능 why? arr[0] 값을 찾아서 arr[0] - 1인 값을 출력:  \n");
    
    parr = arr;
    parr[0] = 100;
    print_arr(arr, 5);
    empty_line();

    printf("parr[0]: %d, arr[0]: %d, arr[0] - 1: %d, --(*arr): %d, *arr: %d  \n", parr[0], arr[0], arr[0] - 1, --(*arr), *arr);
    printf("*arr: %d, *parr: %d  \n", *arr, *parr);
    printf("arr[0]: %d, parr[0]: %d  \n", arr[0], parr[0]);
    empty_line();

    printf("------ > --(*arr)은 *arr 주소에 저장된 값을 -1 감소 시킨다: arr[0] += 1: arr[0]: %d, %d, %d \n", arr[0], *arr, *parr);
    printf("------ > --(*arr)은 같이 실행되는 출력 시: %d, %d, %d, %d, %d \n", --(*arr), *arr, *parr, arr[0], parr[0]);
    printf("------ > arr[0]: %d, %d, %d, %d, %d \n", *(arr + 0), *arr, *parr, arr[0], parr[0]);
    print_arr(arr, 5);
    empty_line();

    printf("배열은 상수, 포인터는 변수, arr++ no!, but parr++ ok \n");
    printf("int arr[3]; arr + 1 => arr + (1 * sizeof(*arr -> 자료형 크기)) 이렇게 내부 연산 한다 \n");
    printf("int *px = parr2; int *py = px + 2; => py - px =>  (주소값(y) - 주소값(x))  /  sizeof (자료형 크기)\n");
    empty_line();
    empty_line();
    
    return 0;
}

void empty_line() {
    printf("\n");
}

void swap(int *pa, int *pb) {
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void print_arr(int *parr, int len) {

    // *parr은 넘어오는 arr 첫 번째 주소값을 넘겨 받는다
    printf("*parr은 넘어오는 arr 첫 번째 엘리머트의 주소값을 넘겨 받는다 \n", len);

    printf("arr len: %d \n", len);
    const int newLen = sizeof parr / sizeof parr[0]; // sizeof arr > pinter size
    printf("arr new len: %d \n", newLen);
    printf("sizeof arr: %u, sizeof arr[0], %u, sizeof *(arr + 0): %u, sizeof *arr: %u \n", sizeof parr, sizeof parr[0], sizeof *(parr + 0), sizeof *parr);
    printf("sizeof parr 은 parr이 가리키는 주소값 크기: \n", sizeof parr);

    int i = 0;
    for (i = 0; i < len; i++) {
        // printf("*(parr + %d) = %d \n", i, *(parr + i));
        printf("arr[%d] = %d \n", i, parr[i]);
    }

}