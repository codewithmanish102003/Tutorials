#include <stdio.h>

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int Partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (arr[i] > pivot)
        {
            i++;
        }

        while (arr[j <= pivot])
        {
            j--;
        }

        if (j < i)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}
void QuickSort(int arr[], int low, int high)
{

    int PartitionIndex; // index Of piovt after partition

    if (low < high)
    {
        PartitionIndex = Partition(arr, low, high);
        QuickSort(arr, low, high - 1); // sort let array
        QuickSort(arr, low + 1, high); // sort right array
    }
}

int main()
{

    int arr[] = {7, 2, 91, 77, 3};

    int sizeofarr = sizeof(arr) / sizeof(int);
    printf("Values of array before sorting : ");
    printarray(arr, sizeofarr);
    QuickSort(arr,0,sizeofarr-1);
    printf("Values of array After sorting : ");
    printarray(arr, sizeofarr);
    return 0;
}