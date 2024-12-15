#include<iostream>
using namespace std;

// int factorial(int num)
// {
//     if((num > 0) ||  (num >= 1))
//     {
//     return num*factorial(num-1);
//     }
//     else{
//         return 1;
//     }
// }

// int main()
// {
//     int n;
//     cout<<"enter the number = ";
//     cin>>n;
//     int fact=factorial(n);
//     cout<<fact;

int fact(int n){
    if((n==0) && (n==1))
    {
        cout<<"please try again "<<endl;
    }
    else{
        return n*fact(n-1);
    }
}

int main()
{
    int n;
    cout<<"enter the no for factorial : "<<endl;
    cin>>n;

    int takevalue=fact(n);
    cout<<"Factorial is : "<<takevalue;

    return 0;
}