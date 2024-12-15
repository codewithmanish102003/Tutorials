#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *getNode(struct node *ptr, int index)
{
    struct node *current = ptr;
    int count = 0;

    while (current != NULL)
    {
        if (count == index)
        {
            return current;
        }
        else
        {
            current = current->next;
            count++;
        }
    }
    return NULL; // node not found
}

void freeNode(struct node *ptr, struct node *nodeToFree)
{
    struct node *current = ptr;
    struct node *previous = NULL;

    while (current != NULL)
    {
        if (current == nodeToFree)
        {
            if (previous == NULL)
            {
                // If the node to free is the head
                ptr = current->next;
            }
            else
            {
                // Update the link to bypass the node to be freed
                previous->next = current->next;
            }

            // Free the node (release memory)
            free(current);
            return;
        }

        previous = current;
        current = current->next;
    }
}

//printing the linked list
void listTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *current = NULL;

    for (int i = 1; i <= 4; i++)
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

    // example of accessing a node element with getnode() functions
    listTraversal(head);
    int indexToGet = 2;
    printf("Element at index %d is: %d", indexToGet, getNode(head, indexToGet)->data);

    // example of freeing a node element with freenode() functions
    int indexToFree = 1;
    struct node *nodeToFree = getNode(head, indexToFree);
    if (nodeToFree != NULL)
    {
        freeNode(head, nodeToFree);
        printf("\nLinked list after freeing the node %d : \n", indexToFree);
        listTraversal(head);
    }
    else
    {
        printf("Node not found at %d index\n", indexToFree);
    }

    // free the memory occupied by a complete linked list
    while (head != NULL)
    {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
