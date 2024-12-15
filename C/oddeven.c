#include <stdio.h>
void main()
{
    int n;

    printf("Enter the number = ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d is even.",n);
    }
    else
    {
        printf("%d is Odd.",n);
    }
}