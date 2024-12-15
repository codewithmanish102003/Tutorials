#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

int isEmpty(struct queue *que)
{
    if (que->rear == que->front)
    {
        return 1;
    }
    return 0;
}

int isFull(struct queue *que)
{
    if (que->rear == que->size - 1)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *que, int val)
{
    if (isFull(que))
    {
        printf("This Queue is full\n");
    }
    else
    {
        que->rear++;
        que->arr[que->rear] = val;
        printf("Enqued element: %d\n", val);
    }
}

int dequeue(struct queue *que)
{
    int dequeueelement;
    if (isEmpty(que))
    {
        printf("This Queue is empty\n");
    }
    else
    {
        que->front++;
        dequeueelement = que->arr[que->front];
    }
    return dequeueelement;
}

void display(struct queue *que)
{
    int i;
    if (isEmpty(que))
    {
        printf("\nEmpty queue\n");
    }
    else
    {
        printf("\nprinting values .....\n");
        for (i = que->front+1; i <= que->rear; i++)
        {
            printf("%d\n", que->arr[i]);
        }
    }
}

int main()
{
    struct queue que;
    que.size = 4;
    que.front = que.rear = -1;
    que.arr = (int *)malloc(que.size * sizeof(int));

    // Enqueue few elements
    enqueue(&que, 12);
    enqueue(&que, 15);
    enqueue(&que, 1);
    printf("Dequeuing element %d\n", dequeue(&que));
    printf("Dequeuing element %d\n", dequeue(&que));
    printf("Dequeuing element %d\n", dequeue(&que));
    enqueue(&que, 45);
    enqueue(&que, 55);
    display(&que);

    // if (isEmpty(&que))
    // {
    //     printf("Queue is empty\n");
    // }
    // if (isFull(&que))
    // {
    //     printf("Queue is full\n");
    // }

    return 0;
}
