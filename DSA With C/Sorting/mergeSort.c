#include <stdio.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int mid, int low, int high,int n)
{
    int i, j, k, CombinedArray[n];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            CombinedArray[k] = arr[i];
            i++;
            k++;
        }
        else
        { 
            CombinedArray[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        CombinedArray[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        CombinedArray[k] = arr[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = CombinedArray[i];
    }
}

void mergeSort(int arr[], int low, int high,int n)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid,n);
        mergeSort(arr, mid + 1, high,n);
        merge(arr, mid, low, high,n);
    }
}

int main()
{
    // int arr[] = {9, 14, 4, 8, 7, 5, 6};
    int arr[] = {1,5,10,12,6,9};
    int sizeofarrr = sizeof(arr)/sizeof(int);
    printArray(arr, sizeofarrr);
    mergeSort(arr, 0, sizeofarrr-1,sizeofarrr);
    printArray(arr, sizeofarrr);
    return 0;
}
