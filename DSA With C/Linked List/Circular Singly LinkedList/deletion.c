#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Case 1: Deleting the first element from the linked list
struct Node *deleteFirst(struct Node *head, struct Node *last)
{
    if (head == NULL)
    {
        printf("The list is already empty");
    }
    else
    {
        struct Node *ptr = head;

        if (head->next != head)
        {
            head = head->next; // if head->next = head and also head=last->next then head->next = last->next
            last->next = head;
        }
        else
        {
            head->next = head;
            last = head->next; // to make the circular connection
        }

        free(ptr);
    }

    return head;
}

// case 2: Deleting the last node
struct Node *deletAtlast(struct Node *head, struct Node *last)
{

    struct Node *temp = head;
    if (head == NULL)
    {
        printf("The list is already empty");
    }
    else
    {
        while (temp->next != last)
        {
            temp = temp->next;
        }
    }
    struct Node *ptr = temp->next;
    temp->next = head;
    last = temp->next;
    last = head;

    free(ptr);

    return head;
}

// case 3:deletion at given index
struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *ptr = head;
    struct Node *qtr = head->next;
    if (head == NULL)
    {
        printf("The list is already empty");
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            ptr = ptr->next;
            qtr = qtr->next;
        }
    }
    ptr->next = qtr->next;
    free(qtr);
    return head;
}
void CircularListTraversal(struct Node *ptr)
{
    struct Node *qtr;
    qtr = ptr;
    if (ptr == NULL)
    {
        printf("The list is empty");
    }
    else
    {
        printf("\n printing values ... \n");

        do
        {
            printf("%d-->", qtr->data);
            qtr = qtr->next;
        } while (qtr != ptr);
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));
    fourth = malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = head;

    struct Node *last = fourth;
    head=deleteFirst(head, last);
    // head = deletAtlast(head, last);
    // head = deleteAtIndex(head, 2);
    CircularListTraversal(head);
    return 0;
}
