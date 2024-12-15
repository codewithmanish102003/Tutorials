#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// finding max value from array
int maximum(int arr[], int n)
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

void countSort(int arr[], int n)
{
    int max = maximum(arr, n);      
    // creating a dynamic array of size max + 1
    int *count = (int *)malloc((max + 1) * sizeof(int));

    // intialize the array elements with value 0
    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    //increment the count array corresponding      
     for (int i = 0; i < n; i++)
    {
        count[arr[i]] = count[arr[i]]+1;
    } 

    int i=0;//counter for count array
    int j=0;//counter for given array

    while (i<=max)  
    {
        if (count[i]>0)
        {
            arr[j]=i;
            count[i]=count[i]+1;
            j++;
        }
        else{
            i++;
        }
        
    }
}

int  main(){

    int arr[] = {8,4,2,2,8,3,3,1};
    // int arr[] = {1,2,3,4,5,6};

    int sizeofarr=sizeof(arr)/sizeof(int);
    printf("Values of array before sorting : ");
    printArray(arr, sizeofarr);
    countSort(arr,sizeofarr);
    printf("Values of array After sorting : ");
    printArray(arr, sizeofarr);

    return 0;
} 