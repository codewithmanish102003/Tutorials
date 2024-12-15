#include<stdio.h>
void main()
{
    long year;

    printf("the year is = ");
    scanf("%lu",&year);

    if(year%4==0)
    {
        printf("%lu is a leap year.",year);
    }
    else{
         printf("%lu is not a leap year.",year);
    }
}
