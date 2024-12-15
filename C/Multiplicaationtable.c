#include <stdio.h>
/// @brief 
/// @return 
int main()
{
    int n, i = 1;
    int m;
    printf("Enter the number = ");
    scanf("%d", &n);
    printf("\nThe multiplication table of %d is following :-\n", n);
    for (int i = 1; i <= 10; i++)
    {
        m = n * i;
        printf("%d*%d=%d\n", n, i, m);
    }

    return 0;
}