#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
// Insertion at begning
struct Node *InsertAtfirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (head == NULL)
    {
        printf("List is Empty. \n");
        ptr->next = NULL;
        ptr->prev = NULL;
        ptr->data = data;
        head = ptr;
    }
    else
    {
        ptr->data = data;
        ptr->prev = NULL;
        ptr->next = head;
        head->prev = ptr;
        head = ptr;
    }

    return head;
}

// Insertion at last
struct Node *InsertAtlast(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (head == NULL)
    {
        printf("List is Empty. \n");
        ptr->next = NULL;
        ptr->prev = NULL;
        ptr->data = data;
        head = ptr;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        ptr->data = data;
        temp->next = ptr;
        ptr->prev = temp;
        ptr->next = NULL;
    }
    return head;
}

// Insertion Between Two Nodes
struct Node *InsertAtindex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (head == NULL)
    {
        printf("List is Empty. \n");
        ptr->next = NULL;
        ptr->prev = NULL;
        ptr->data = data;
        head = ptr;
    }
    else
    {
        struct Node *temp = head;
        int i = 0;
        while (i != index - 1)
        {
            temp = temp->next;
            i++;
        }
        ptr->data=data;
        ptr->next=temp->next;
        ptr->prev=temp;
        temp->next=ptr;
    }
    return head;
}
    void DoublyListTraversal(struct Node * ptr)
    {
        printf("Null->");
        while (ptr != NULL)
        {
            printf("%d->", ptr->data);
            ptr = ptr->next;
        }
        printf("Null\n");
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
        printf("Before Insertion \n");
        DoublyListTraversal(head);
        printf("After Insertion \n");
        // head = InsertAtfirst(head, 12);
        // head=InsertAtlast(head,12);
        head=InsertAtindex(head,12,2);
        DoublyListTraversal(head);
        return 0;
    }
