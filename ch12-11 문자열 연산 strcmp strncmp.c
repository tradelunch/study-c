#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    printf("str3이 str4보다 사전에서 먼저 나오면 -1 \n");
    printf("str3이 str4보다 나중에 나오면 1 \n");
    printf("str3이 str4보다 같으면 0 \n");

    char str3[80] = "abcde ff";
    char str4[80] = "abcde fg";

    printf("str3: %s, size: %lu, len=%u \n", str3, sizeof str3, strlen(str3));
    printf("str4: %s size: %lu, len=%u \n", str4, sizeof str4, strlen(str3));

    printf("strcmp: %d \n", strcmp(str3, str4)); // -1
    printf("strncmp: %d \n", strncmp(str3, str4, 5)); // 0


    return 0;
}
