#include <stdio.h>
#include <string.h>
#include <stdlib.h> // for malloc, free

void print_str(char **ps);

int main(int argc, char const *argv[])
{

    printf("동적 할당을 사용한 문자열 처리: \n");
    printf("단어 10만개: \n");
    printf("맥스 길이 46 > null 문자 > 47 > 47만 바이트 필요 \n");
    printf("평균 길이 7 > null 문자 > 8 > 8만 바이트 필요 \n");


    const int size = 21;
    char temp[80];
    char *str[21] = { 0 }; // 문자열을 입력할 배열 null 포인터로 초기화
    printf("char *str[21] 을 해석해보자 \n");
    printf("char *str[21] 은 21개의 포이터 배열이다 \n");
    printf("str + 0은 21개 포인터 중 0번째 포인터가 가리키는 주소값 \n");
    printf("\n");

    printf("*(str + 0)은 21개 포인터 중 0번째 포인터가 가리키는 주소값이 가리키는 값 \n");
    printf("str[0]은 21개 포인터 중 0번째 포인터가 가리키는 주소값이 가리키는 값 \n");
    printf("*(str + 0) 은 str[0]과 같다 \n");
    printf("그리고 둘다 > 21개 포인터 중 0번째 포인터가 가리키는 주소값이 가리키는 값 \n");

    int i = 0;

    for (i = 0; i < size; i++) { //
        printf("단어 입력: %u %ld %u %ld: ", sizeof str, sizeof *(str + i), sizeof str[0], sizeof *(str[0])); // *(str) 주소값
        gets(temp);
        
        if (strcmp(temp, "end") == 0) {
            break;
        }

        str[i] = (char *)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
    }

    printf(">> str[0]: %s, *(str + 0): %s \n", str[0], *(str + 0));
    printf(">> (str + 0): %d \n", (str + 0));
    printf(">> *(str + 0): %s \n", *(str + 0));
    printf(">> str[0]: %s \n", str[0]);
    // printf(">> *str[0]: %s \n", *str[0]); // eror
    printf(">> str[0][0]: %s \n", *str); // error


    print_str(str);

    for (i = 0; i < 3; i++) {
        free(str[i]);
    }

    return 0;
}


void print_str(char **ps) { // 이중 포인터? string 배열은 char[][] 배열이라서
    printf("**ps: %s \n", *(ps + 1) + 1);

    while (*ps != NULL) {
        printf("> func: %s \n", *ps);
        ps++;
    }
}
