#include <stdio.h>

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void InsertionSort(int arr[], int n)
{
    // for no of passes
    for (int i = 1; i <= n - 1; i++)
    {
        //for each passes
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) // in decending arr[j]<key
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{

    int arr[] = {7, 2, 91, 77, 3};

    int sizeofarr = sizeof(arr) / sizeof(int);
    printf("Values of array before sorting : ");
    printarray(arr, sizeofarr);
    InsertionSort(arr, sizeofarr);
    printf("Values of array After sorting : ");
    printarray(arr, sizeofarr);
    return 0;
}