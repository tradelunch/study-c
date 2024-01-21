#include <stdio.h>
#include <string.h>

struct list
{
    int v;
    struct list *next;
};

int main(int argc, char const *argv[])
{
    printf("argc: %d\n", argc);

    struct list a = {10, 0};
    struct list b = {20, 0};
    struct list c = {30, 0};

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    struct list *head = &a;
    struct list *current = head;


    while (current != NULL) {
        printf("current: %d \n", current -> v);
        current = current->next;
    }

    return 0;
}