#include<iostream>
using namespace std;

int main(){

//Basic pointer example
    int a=44;
    int* ptr=&a;

    cout<<"The value of a = "<<*(ptr)<<endl;

//new keyword

int *ptr2=NULL;
ptr2=new int;
*ptr2=12;
cout<<"The value of ptr2 = "<<*ptr2<<endl;

//intialization of a pointer variable via new

float *ptr3=new float(200.234);
// delete ptr3;//deleting memory occupied by a single variable
cout<< "the value of ptr3 is " <<*ptr3<<endl;


//creating a dynamic array using new
int *arr=new int[3];

arr[0]=10;
// arr[1]=20;
*(arr+1)=40;
// arr[2]=30;
*(arr+2)=50;

// delete[] arr; //deleting memory taken by complete array elements
cout<<"The values of array are : " <<endl;
for (int i = 0; i < 3; i++)
{
    cout<<arr[i]<<endl;
}

delete ptr;
delete ptr2;
delete ptr3;
delete[] arr;

return 0;
}