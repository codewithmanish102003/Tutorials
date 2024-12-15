#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[5]={10,53,7634,674,74};
    int min=arr[0];

    for (int i = 0; i < (sizeof(arr)/sizeof(int)); i++)
    {
        if (arr[i]< min)
        {
            min=arr[i];
        }
        
    }
    
    printf("minimum value in array = %d",min);

    getch();
}