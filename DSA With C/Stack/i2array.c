#include <stdio.h>
#define Max 5
int stack[Max], top = -1;

void push(int val)
{
    if (top == Max)
        printf("\n Overflow");
    else
    {
            top = top + 1;
            stack[top] = val;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Underflow");
    }
    else
    {
        top = top - 1;
    }
}
void show()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d->", stack[i]);
    }
    if (top == -1)
    {
        printf("\nStack is empty\n");
    }
}
void main()
{
    printf(("Before Insertion \n"));
    show();
    printf("Inserting elements............");
    push(56);
    printf(("After Insertion \n"));
    show();
    pop();
    show();
    pop();
}
