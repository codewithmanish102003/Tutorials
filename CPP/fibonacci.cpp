#include<iostream>
using namespace std;

int main()
{
    int t1=0;
    int t2=1;
    int nexterm,n;

    cout<<"Enter How many numbers do you want to print in fibonacci series : ";
    cin>>n;

    cout<<"The fibonacci series is following : ";

for (int i = 0; i <= n; i++)
{
    if(i==0){
        cout<<t1<<endl;
    }
    if (i==1)
    {
        cout<<t2<<endl;
    }
    nexterm=t1+t2;
    cout<<nexterm<<endl;
    t1=t2;
    t2=nexterm; 
}
return 0;
}