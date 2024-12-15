#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[5]={10,53,7634,674,74};
    int temp;

    for (int i = 0; i < (sizeof(arr)/sizeof(int)); i++)
    {
        for (int j = i+1; j < (sizeof(arr)/sizeof(int)); j++)
        {
            if (arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    
    printf("The elements of array in descending order : \n");
     for (int i = 0; i < (sizeof(arr)/sizeof(int)); i++)
    {
        printf("%d",arr[i]);
        if(i<4){
            printf(" , ");
        }
    }

    getch();
}