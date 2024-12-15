#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void listTraversal(struct node *ptr)
{
    printf("Linked List.......\n");
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("Null");
}

int main()
{
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *current = NULL;
    int n;
    printf("How many nodes do you want->");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter %d value: ", i);
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            current = newNode;
        }
        else
        {
            current->next = newNode;
            current = newNode;
        }
    }

    listTraversal(head);

    return 0;
}