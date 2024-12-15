#include <stdio.h>

#define MAX 100

void main() {
   int array[MAX] = {2, 3, 4, 5};
   int size = 4;        // number of elements in array
   int index = 0;        // loop variable
   int element = 1;    // new data element to be stored in array

   // print array before insertion
   printf("Printing array before insertion \n");
   
   for(int i = 0; i < size; i++) {
      printf("array[%d] = %d \n", i, array[i]);
   }

   // now shift rest of the elements downwards   
   for(int i = size-1; i >= index; i--) {
      array[i+1] = array[i];
   }

   // add new element at first position
   array[index] = element;

   // increase size to reflect number of elements
   size++;

   // print to confirm
   printf("Printing array after insertion −\n");
   
   for(int i = 0; i < size; i++) {
      printf("array[%d] = %d\n", i, array[i]);
   }
}