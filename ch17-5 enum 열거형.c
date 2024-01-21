#include <stdio.h>

enum season
{
    SPRING = 10,
    SUMMER = 2,
    FALL = 3,
    WINTER = 4,
};

int main(int argc, char const *argv[])
{
    printf("argc: %d\n", argc);

    char *pc = NULL;

    enum season ss;
    ss = FALL;
    switch (ss) {
        case SPRING:
            pc = "inline";
            break;
        case SUMMER:
            pc = "swimming";
            break;
        case FALL:
            pc = "trip";
            break;
        case WINTER:
            pc = "skiing";
            break;
    }

    printf("나의 레저 활동 %u => %s \n", ss, pc);


    return 0;
}