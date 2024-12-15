#include <stdio.h>
int main()
{
    //aritmetic operators
    int a=2,b=3,c=4;
    int r=a%b*a+a*a/b-c/a%b;

    printf("%d",r);

    //assignment operators

    printf("\n%d",a%=a/b*c+a+b+c);

    printf("\n%d",b+=a+2);

    //relational operator

    printf("\n%d",10>20);//o 0=false and 1=true
    printf("\n%d",10<=20);

    //logical operators

    printf("\n%d",10>10&&10<10);
    printf("\n%d",5>2||5<2);
    
 



    return 0;
}