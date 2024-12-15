#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void DoublyListTraversal(struct Node *ptr)
{
    printf("Null->");
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("Null\n");
}

// Case 1: Deleting the first element from the linked list
struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    if (ptr == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        head = head->next;
        head->next->prev = NULL;
        free(ptr);
    }
    return head;
}

// Case 2: Deleting the last element in doubly inked list
struct Node *deleteAtLast(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *qtr = head->next;

    if (ptr == NULL)
    {
        printf("List is empty\n");
    }
    else if (ptr->next == NULL)
    {
        ptr = NULL;
        free(ptr);
        printf("Node Deleted \n");
    }
    else
    {
        while (qtr->next != NULL)
        {
            ptr = ptr->next;
            qtr = qtr->next;
        }
        ptr->next = NULL;
    }
    free(qtr);
    return head;
}

// Case 3: Deleting the element at a given index from the linked list
struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *ptr = head;
    struct Node *qtr = head->next;
    if (ptr == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            ptr = ptr->next;
            qtr = qtr->next;
        }

        ptr->next = qtr->next;
        qtr->next->prev = ptr;
        free(qtr);
    }
    return head;
}

// Case 4: Deleting the element with a given value from the linked list
struct Node *deleteByValue(struct Node *head, int value)
{
    struct Node *ptr = head;
    struct Node *qtr = head->next;

     // Check if the head node contains the value
    if (head->data == value) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    while (qtr->data != value && qtr->next != NULL)
    {
        ptr = ptr->next;
        qtr = qtr->next;
    }

    if (qtr->data == value)
    {
        ptr->next = qtr->next;
        qtr->next->prev=ptr;
        free(qtr);
    }
    else
    {
        printf("Error: Value not found in the list\n");
    }
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->prev = NULL;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->prev = head;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->prev = second;
    third->next = fourth;

    // Terminate the list at the fourth node
    fourth->data = 66;
    fourth->prev;
    fourth->next = NULL;
    printf("Before Deletion \n");
    DoublyListTraversal(head);
    printf("After Deletion \n");
    // head=deleteFirst(head);
    // head=deleteAtLast(head);
    // head = deleteAtIndex(head, 2);
    head=deleteByValue(head,11);

    DoublyListTraversal(head);
    return 0;
}
