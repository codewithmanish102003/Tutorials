#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to search for a value in the linked list
struct Node *search(struct Node *head, int value)
{
    struct Node *ptr = head;
    int i = 0;

    if (ptr == NULL)
    {
        printf("The list is empty");
    }
    else
    {
        while (ptr != NULL)
        {
            if (ptr->data == value)
            {
                printf("Value %d found in the list at index %d.\n", value, i);
                return ptr;
            }
            i++;
            ptr = ptr->next;
        }
    }
    printf("Value %d not found in the list.\n", value);
    return NULL;
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

        while (qtr->next != ptr)
        {

            printf("%d-->", qtr->data);
            qtr = qtr->next;
        }
        printf("%d", qtr->data);
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
    search(head, 41);
    CircularListTraversal(head);
    return 0;
}
