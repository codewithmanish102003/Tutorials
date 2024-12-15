#include <stdio.h>

int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    // unsorted Array
    int arr[] = {1, 3, 5, 56, 4, 3, 23, 5, 4, 54, 34};

    int size = sizeof(arr) / sizeof(int);
    int element = 54;
    int searchindex = linearsearch(arr, size, element);

    printf("the element %d is found at the index %d\n", element, searchindex);

    return 0;
}