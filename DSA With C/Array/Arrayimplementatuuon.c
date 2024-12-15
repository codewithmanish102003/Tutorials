#include <stdio.h>
#include <stdlib.h>
// creating a dynamic abstract array with structure
struct myArray
{
    int totalSize;
    int usedSize;
    int *ptr;
};

void createArray(struct myArray *arr, int tsize, int usize)
{ // *arr is a strcture pointer
    // (*arr).totalSize = tsize;
    // (*arr).usedSize = usize;
    // (*arr).ptr = (int *)malloc(tsize*sizeof(int));

    arr->totalSize = tsize;
    arr->usedSize = usize;
    arr->ptr = (int *)malloc(tsize * sizeof(int));
}

void setval(struct myArray *arr)
{
    for (int i = 0; i < arr->usedSize; i++)
    {
        printf("Enter the %d element of Array = ", i + 1);
        scanf("%d", &(arr->ptr)[i]);
    }
}

void show(struct myArray *arr)
{
    for (int i = 0; i < arr->usedSize; i++)
    {
        printf("%d\n", (arr->ptr)[i]);
    }
}
int main()
{
    struct myArray Array;
    // passing structure as address
    createArray(&Array, 100, 5);
    setval(&Array);
    show(&Array);

    return 0;
}