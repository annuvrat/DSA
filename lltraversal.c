#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void Linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *first;
    struct node *second;
    struct node *third;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // first  node link to second node;
    first->data = 10;
    first->next = second;

    // second node to third node;
    second->data = 20;
    second->next = third;

    // making third node address null;
    third->data = 30;
    third->next = NULL;

    // Function calling
    Linkedlisttraversal(first);

    return 0;
}

