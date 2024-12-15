#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to swap data of two nodes
void swap(struct Node* a, struct Node* b) {
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

// Bubble Sort for a linked list
void bubbleSort(struct Node* head) {
    int swapped;
    struct Node* ptr;
    struct Node* lptr = NULL;

    // Check for empty list
    if (head == NULL)
        return;

    do {
        swapped = 0;
        ptr = head;

        while (ptr->next != lptr) {
            if (ptr->data > ptr->next->data) {
                swap(ptr, ptr->next);
                swapped = 1;
            }
            ptr = ptr->next;
        }
        lptr = ptr;
    } while (swapped);
}

// Function to insert a new node at the beginning of the list
void insertAtBeginning(struct Node** headRef, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *headRef;
    *headRef = newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}

int main() {
    // Example usage
    struct Node* head = NULL;

    // Inserting elements into the linked list
    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 50);
    insertAtBeginning(&head, 20);

    // Printing the original linked list
    printf("Original linked list: ");
    printList(head);

    // Sorting the linked list using Bubble Sort
    bubbleSort(head);

    // Printing the sorted linked list
    printf("Sorted linked list: ");
    printList(head);

    // Freeing the allocated memory
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
