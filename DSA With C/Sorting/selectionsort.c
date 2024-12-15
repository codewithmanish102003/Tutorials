#include <stdio.h>

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void SelectionSort(int arr[], int n)
{

    printf("Running selection sort....\n");

    for (int i = 0; i < n - 1; i++)
    {
        int IndexOFmin = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[IndexOFmin])  // for descending arr[j] > arr[indexOFmin]
            {
                IndexOFmin = j;
            }
        }

        int temp=arr[i];
        arr[i]=arr[IndexOFmin];
        arr[IndexOFmin]=temp;
    }
}

int main()
{

    int arr[] = {7, 2, 91, 77, 3};

    int sizeofarr = sizeof(arr) / sizeof(int);
    printf("Values of array before sorting : ");
    printarray(arr, sizeofarr);
    SelectionSort(arr, sizeofarr);
    printf("Values of array After sorting : ");
    printarray(arr, sizeofarr);
    return 0;
}