#include <stdio.h>

void check_global(void);
void change_local(int *d);

int global; // int initialized to 0;

int main(int argc, char const *argv[])
{
    int local = 10;

    printf("local: %d \n", local);
    change_local(&local);
    printf("local: %d \n", local);

    check_global();
    global = 8080;
    check_global();

    return 0;
}

void check_global(void) {
    printf("global: %d \n", global);
}

void change_local(int *d) {
    *d = 99;
}
