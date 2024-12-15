#include<stdio.h>
int main()
{
    // int x=6;
    // int y=--x;

    // printf("%d %d",x,y);

    // int a=3,b=4,c=5;
    // int d=a-++a+b---c+++b-c;

    // printf("%d %d %d %d",a,b,c,d);

    int x=2,y=3,z=7;
    int r=x-++x+y-z++-y+z;

    printf("%d %d %d %d",x,y,z,r);

    return 0;
}