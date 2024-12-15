#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Case 1
struct Node *insertAtFirst(struct Node *head, int data, struct Node *last)
{
    struct Node *ptrnew = (struct Node *)malloc(sizeof(struct Node));
    ptrnew->data = data;

    if (head == NULL) // Empty list
    {
        ptrnew->next = ptrnew; // Point to itself
        head = ptrnew;
        last = ptrnew; // Update last for the circular connection
    }
    else
    {
        ptrnew->next = head;
        last->next = ptrnew;
        head = ptrnew;
    }

    return head; // Return the newly inserted node as the new head
}

// Case 2
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = head;
    int i = 0;

    // while (i!=index-1)
    // {
    //     temp = temp->next;
    //     i++;
    // }
    for (int i = 0; i != index - 1; i++)
    {
        temp = temp->next;
    }
    ptr->data = data;
    ptr->next = temp->next;
    temp->next = ptr;
    return head;
}

// case 3
struct Node *insertAtEnd(struct Node *head, int data, struct Node *last)
{
    struct Node *ptrnew = (struct Node *)malloc(sizeof(struct Node));
    ptrnew->data = data;

    if (head == NULL)
    {
        ptrnew->next = ptrnew; // Point to itself
        head = ptrnew;
    }
    else
    {
        while (last->next != head)
        {
            last = last->next;
        }

        last->next = ptrnew;
        ptrnew->next = head;
    }

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
    // head=insertAtFirst(head, 6, last); // Update head with the new value
    // head = insertAtIndex(head, 6,2 );
    insertAtEnd(head, 6, last);
    CircularListTraversal(head);

    return 0;
}
