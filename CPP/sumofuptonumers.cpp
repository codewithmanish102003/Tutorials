#include<iostream>
using namespace std;

int sumofirstnum(int num)
{
    if(num != 0)
    {
    return num+sumofirstnum(num -1);
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
    int Sum=sumofirstnum(num);
    cout<<Sum;

    return 0;
}