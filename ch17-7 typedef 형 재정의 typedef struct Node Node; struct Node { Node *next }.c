#include <stdio.h>

typedef struct Node Node;
struct Node
{
    int v;
    Node *next;
};

int main(int argc, char const *argv[])
{
    printf("argc: %d\n", argc);

    Node a = {1, 0};
    Node b = {2, 0};
    Node c = {3, 0};

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    Node *head = &a;
    Node *current = head;

    while (current != NULL)
    {
        printf("list v=%d \n", current->v);
        current = current->next;
    }

    return 0;
}