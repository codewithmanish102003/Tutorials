#include<iostream>
using namespace std;

// void swap(int *x,int *y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }
void swap(int &num1,int &num2){
    int temp=num1;
    num1=num2;
    num2=temp;
}
int main()
{
    int a=12 ,b=13;

    cout<<"Before swap a = "<<a<<" and b = "<<b<<endl;
    swap(a,b);
    cout<<"After swap : "<<endl;
    cout<<" a = "<<a<<endl;
    cout<<" b = "<<b<<endl;

    return 0;
}