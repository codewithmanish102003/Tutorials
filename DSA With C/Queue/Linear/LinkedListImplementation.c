#include <stdio.h>
#include <stdlib.h>

struct queueNode
{
    int data;
    struct queueNode *next;
};

struct Queue
{
    struct queueNode *front;
    struct queueNode *rear;
};

struct Queue *createQueue()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

int isEmpty(struct Queue *q)
{
    if (q->front == NULL)
        return 1;
    return 0;
}

void enqueue(struct Queue *q, int data)
{
    struct queueNode *temp = (struct queueNode *)malloc(sizeof(struct queueNode));
    temp->data = data;
    temp->next = NULL;
    if (q->rear == NULL)
    {
        q->front = q->rear = temp;
        return;
}
    q->rear->next = temp;
    q->rear = temp;
}

int dequeue(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return -1;
    }
    struct queueNode *temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    int data = temp->data;
    free(temp);
    return data;
}

void display(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return;
    }
    struct queueNode *temp = q->front;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct Queue *q = createQueue();
    enqueue(q, 12);
    enqueue(q, 15);
    enqueue(q, 1);
    display(q);
    printf("%d dequeued from queue\n", dequeue(q));
    display(q);
    enqueue(q, 45);
    enqueue(q, 55);
    display(q);
    printf("%d dequeued from queue\n", dequeue(q));
    printf("%d dequeued from queue\n", dequeue(q));
    printf("%d dequeued from queue\n", dequeue(q));
    return 0;
}