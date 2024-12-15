#include<stdio.h>
#include<stdlib.h>
 
struct circularQueue
{
    int size;
    int front;
    int rear;
    int* arr;
};
 
 
int isEmpty(struct circularQueue *que){
    if(que->rear==que->front){ 
        return 1;
    }
    return 0;
}
 
int isFull(struct circularQueue *que){
    if((que->rear+1)%que->size == que->front){
        return 1;
    }
    return 0;
}
 
void enqueue(struct circularQueue *que, int val){
    if(isFull(que)){
        printf("This Queue is full");
    }
    else{
        que->rear = (que->rear +1)%que->size;
        que->arr[que->rear] = val; 
        printf("Enqued element: %d\n", val);
    }
}
 
int dequeue(struct circularQueue *que){
    int dequeueelement = -1;
    if(isEmpty(que)){
        printf("This Queue is empty");
    }
    else{
        que->front = (que->front +1)%que->size;
        dequeueelement = que->arr[que->front]; 
    }
    return dequeueelement;
}

void display(struct circularQueue *que)
{
    int i;
    if (isEmpty(que))
    {
        printf("\nEmpty queue\n");
    }
    else
    {
        printf("\nPrinting values ...\n");
        for (i = (que->front + 1) % que->size; i != (que->rear + 1) % que->size; i = (i + 1) % que->size)
        {
            printf("%d\n", que->arr[i]);
        }
    }
}

 
 
int main(){
    struct circularQueue que;
    que.size = 4;
    que.front = que.rear = -1;
    que.arr = (int*) malloc(que.size*sizeof(int));
    
    // Enqueue few elements
    enqueue(&que, 12);
    enqueue(&que, 15);
    enqueue(&que, 1); 
    printf("Dequeuing element %d\n", dequeue(&que));
    printf("Dequeuing element %d\n", dequeue(&que));
    printf("Dequeuing element %d\n", dequeue(&que)); 
    enqueue(&que, 4);
    enqueue(&que, 78);
    enqueue(&que,34);
    display(&que);
    enqueue(&que,89);

    return 0;
}
 