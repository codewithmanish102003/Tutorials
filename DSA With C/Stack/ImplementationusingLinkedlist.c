#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *ptr)
{
    int i=1;
    while (ptr != NULL)
    {
        printf("Element %d: %d\n",i, ptr->data);
        ptr = ptr->next;
        i++;
    }
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int value)
{
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        return top;
    }
}

struct Node * pop(struct Node **top)
{
    struct Node *ptr;
    if (*top == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        ptr = *top;
        *top = (*top)->next;
        free(ptr);
        printf("Item popped\n");
    }
}

int main()
{
    struct Node *top = NULL;
    top = push(top, 6);
    top = push(top, 56);
    top = push(top, 9);
    top = push(top, 34);
    display(top);
    pop(&top);
    display(top);
    return 0;
}
