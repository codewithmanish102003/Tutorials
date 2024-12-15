#include<stdio.h>

int main()
{
char str[25];
 //char name[25]="Manish";
 //char name[25]={'M','a','n','i','s','h','\0'};
 // printf("Hello %s!",name);
printf("Enter the string = ");
gets(str);
printf("Hello %s ! ",str);
    return 0;
}