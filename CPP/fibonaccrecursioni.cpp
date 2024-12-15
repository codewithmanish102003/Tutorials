#include<iostream>
using namespace std;

int Fibo(int num)
{
    if(num == 0)
    {
    return 0;
    }
    else if(num == 1)
    {
        return 1;
    }
    else{
        return Fibo(num-1)+Fibo(num-2);
    }
}

int main()
{
    int num;
    cout<<"How many numbers you want in series  = ";
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<Fibo(i)<<endl;
    }

    return 0;
}