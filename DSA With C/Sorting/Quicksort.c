#include <stdio.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int partition(int arr[], int low, int high)
{
    int pivot =arr[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp =arr[i];
        arr[i] =arr[j];
        arr[j] = temp;
        }
    } while (i < j);

    // Swaparr[low] andarr[j]
    temp =arr[low];
arr[low] =arr[j];
arr[j] = temp;
    return j;
}

void quickSort(int arr[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(arr, low, high); 
        quickSort(arr,low, partitionIndex-1);  // sort left subarray 
        quickSort(arr,partitionIndex + 1,high); // sort right subarray
    }
}

int main()
{
    int arr[] = {2,4,3,9,1,4,8,7,5,6 };
    // int arr[] = {1,2,3,4,5,6};

    int sizeofarr=sizeof(arr)/sizeof(int);
    printf("Values of array before sorting : ");
    printArray(arr, sizeofarr);
    quickSort(arr,0,sizeofarr-1);
    printf("Values of array After sorting : ");
    printArray(arr, sizeofarr);
}
