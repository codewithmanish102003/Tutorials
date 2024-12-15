#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("Stack is Empty\n");
        return 1;
    }
    else
    {
        printf("Stack is not Empty\n");
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        printf("Stack is Full\n");
        return 1;
    }
    else
    {
        printf("Stack is Not Full\n");
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

void pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        // return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        printf("%d is poped\n", val);
        // return val;
    }
}

int peek(struct stack *ptr, int i)
{
    int arrayInd = ptr->top - i;
    if (arrayInd < 0)
    {
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else
    {
        return ptr->arr[arrayInd];
    }
}

void display(struct stack *ptr){
    printf("The values of stack are : \n");
     for (int i = 0; i <=ptr->top; i++)
    {
        printf("The value at position %d is %d\n",i+1, peek(ptr, i));
    }


}

int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));

    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Pushing an element manually
    s->arr[0] = 7;
    s->top++;

    isEmpty(s);
    isFull(s);
    push(s, 12);
    push(s,15);
    // pop(s);
    // Printing values from the stack
    display(s);
    printf("Top most element = %d\n",s->arr[s->top]);
    printf("Bottom most element = %d\n",s->arr[0]);
   
    return 0;
}
