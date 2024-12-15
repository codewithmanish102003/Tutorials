#include<iostream>
using namespace std;

int sumofdigits(int num)
{
    if(num != 0)
    {
    return (num%10)+sumofdigits(num/10);
    }
    else{
        return 0;
    }
}

int main()
{
    int num;
    cout<<"Enter the number = ";
    cin>>num;
    int Sum=sumofdigits(num);
    cout<<Sum;

    return 0;
}