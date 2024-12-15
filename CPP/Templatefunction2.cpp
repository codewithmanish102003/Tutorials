//Average of two numbers
#include <iostream>
using namespace std;

template <typename T1, typename T2>

float Average(T1 num1, T2 num2) {
    float Avg=(num1+num2)/2.0;
    return (Avg);
}

int main(){

    int a,b;
    float Avg;

    cout<<"Enter the  first number: ";
    cin>>a;
    cout<<"\nEnter the second number: ";
    cin>>b;

    Avg=Average(a,b);
    cout<<"\nThe average is : "<<Avg;
    
    return 0;
}
