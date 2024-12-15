#include <stdio.h>
#include <stdlib.h>

struct queueNode
{
    int data;
    struct queueNode *next;
};

struct CircularQueue
{
    struct queueNode *front;
    struct queueNode *rear;
};

struct CircularQueue *createCircularQueue()
{
    struct CircularQueue *q = (struct CircularQueue *)malloc(sizeof(struct CircularQueue));
    q->front = q->rear = NULL;
    return q;
}

int isCircularQueueEmpty(struct CircularQueue *q)
{
    if (q->front == NULL)
        return 1;
    return 0;
}

void enqueueInCircularQueue(struct CircularQueue *q, int data)
{
    struct queueNode *temp = (struct queueNode *)malloc(sizeof(struct queueNode));
    temp->data = data;
    temp->next = NULL;
    if (q->rear == NULL)
    {
        q->front = q->rear = temp;
        q->rear->next = q->front; // Add this line to make the queue circular
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
    q->rear->next = q->front; // Add this line to make the queue circular
}

int dequeueFromCircularQueue(struct CircularQueue *q)
{
    if (isCircularQueueEmpty(q))
    {
        printf("Circular Queue is empty\n");
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

void displayCircularQueue(struct CircularQueue *q)
{
    if (isCircularQueueEmpty(q))
    {
        printf("Circular Queue is empty\n");
        return;
    }
    struct queueNode *temp = q->front;
    while (temp!= q->rear)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data); // Print the last node
    printf("\n");
}

int main()
{
    struct CircularQueue *q = createCircularQueue();
    enqueueInCircularQueue(q, 12);
    enqueueInCircularQueue(q, 15);
    enqueueInCircularQueue(q, 1);
    displayCircularQueue(q);
    printf("%d dequeued from circular queue\n", dequeueFromCircularQueue(q));
    displayCircularQueue(q);
    enqueueInCircularQueue(q, 45);
    enqueueInCircularQueue(q, 55);
    displayCircularQueue(q);
    printf("%d dequeued from circular queue\n", dequeueFromCircularQueue(q));
    printf("%d dequeued from circular queue\n", dequeueFromCircularQueue(q));
    printf("%d dequeued from circular queue\n", dequeueFromCircularQueue(q));
    return 0;
}