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

// Function to print the linked list
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }

    printf("NULL\n");
}

int main()
{
    // Example usage
    struct Node *head = NULL;

    // Creating a sample linked list
    for (int i = 5; i > 0; i--)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = i * 10;
        newNode->next = head;
        head = newNode;
    }

    // Printing the original linked list
    printf("Original linked list: ");
    linkedListTraversal(head);

    // Searching for a value in the linked list
    search(head, 6);
    return 0;
}
