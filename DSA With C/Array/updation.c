#include <stdio.h>
void main()
{
    int arr[] = {1, 3, 5, 7, 8};
    int n = 5, item = 10;
    int i;
    printf("The original array elements are :\n");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = %d \n", i,arr[i]);
    }
arr[2] = item;
    printf("The array elements after updation :\n");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = %d \n", i,arr[i]);
    }
}