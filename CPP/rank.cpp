#include<iostream>
#include<string>
using namespace std;

int main()
{
    int percentage;
    string division;

    cout<<"Enter The Percentage = ";
    cin>>percentage;

    if (percentage<=33)
    {
        division="Fail";
    }
    else if (percentage<=60)
    {
        division="Seconed";
    }
    else if (percentage<=100)
    {
        division="First";
    }
    else{
        division="Invalid";
    }
    
    cout<<"Division = "<<division;
    return 0;
}