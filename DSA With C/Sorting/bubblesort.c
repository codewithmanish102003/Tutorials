#include <stdio.h>

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++) // for numberb of passes
    {
        printf("working on pass no. %d \n",i+1);
        for (int j = 0; j < n - 1 - i; j++) // for number of comparisions in each pass
        { 
            // if (arr[j] < arr[j + 1]) descendung
            if (arr[j] > arr[j + 1]) // ascending
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{

    int arr[] = {7, 11, 9, 2, 17, 4};
    // int arr[] = {1,2,3,4,5,6};

    int sizeofarr=sizeof(arr)/sizeof(int);
    printf("Values of array before sorting : ");
    printarray(arr, sizeofarr);
    BubbleSort(arr, sizeofarr);
    printf("Values of array After sorting : ");
    printarray(arr, sizeofarr);
    return 0;
}