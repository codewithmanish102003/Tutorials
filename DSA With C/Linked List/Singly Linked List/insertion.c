#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = head;
    head=ptr;
    return ptr; 
}

// Case 2
struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * temp = head;
    int i = 0;

    // while (i!=index-1)
    // {
    //     temp = temp->next;
    //     i++;
    // }
    for(int i=0; i != index-1; i++) {
  if(temp->next != NULL) {
    temp = temp->next;
  }
    }
    ptr->data = data;
    ptr->next = temp->next;
    temp->next = ptr;
    return head;
}

// Case 3
struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * temp = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->next = NULL;
    return head;
}

// Case 4
struct Node * insertAfterNode(struct Node *head, struct Node *prevNode, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    
    return head;
}

//case 5
struct Node *insertBeforeNode(struct Node *head, struct Node *nextNode, int data) {
    // Allocate memory for the new node
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    
    // Set the data of the new node
    ptr->data = data;

    // If the new node is to be inserted before the head
    if (head == nextNode) {
        ptr->next = head;
        return ptr; // Update the head to the new node
    }

    // Traverse the linked list to find the node before nextNode
    struct Node *current = head;
    while (current != NULL && current->next != nextNode) {
        current = current->next;
    }

    // Insert the new node before nextNode
    if (current != NULL) {
        ptr->next = current->next;
        current->next = ptr;
    }

    return head;
}


int main(){
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
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    // head = insertAtFirst(head, 56);
    // head = insertAtIndex(head, 56, 3);
    // // head = insertAtEnd(head, 56);
    // head = insertAfterNode(head, third, 45);
    head=insertBeforeNode(head,head,0);
    printf("\nLinked list after insertion\n");
    linkedListTraversal(head);

    
    return 0;
}