#include <stdio.h>

// Function to swap the the position of two elements
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void heapify(int arr[], int size, int i)
{
  // Find largest among root, left child and right child
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (left < size && arr[left] > arr[largest])
    largest = left;

  if (right < size && arr[right] > arr[largest])
    largest = right;

  // Swap and continue heapifying if root is not largest
  if (largest != i)
  {
    swap(&arr[i], &arr[largest]);
    heapify(arr, size, largest);
  }
}

// Main function to do heap sort
void heapSort(int arr[], int size)
{
  // Build max heap
  for (int i = size / 2 - 1; i >= 0; i--)
    heapify(arr, size, i);

  // Heap sort
  for (int i = size - 1; i >= 0; i--)
  {
    swap(&arr[0], &arr[i]);

    // Heapify root element to get highest element at root again
    heapify(arr, i, 0);
  }
}

// Print an array
void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

// Driver code
int main()
{
  int arr[] = {1, 12, 9, 5, 6, 10};
  int size = sizeof(arr) / sizeof(int);
  printf("Given array\n");
  printArray(arr, size);
  heapSort(arr, size);
  printf("Sorted array is \n");
  printArray(arr, size);

  return 0;
}