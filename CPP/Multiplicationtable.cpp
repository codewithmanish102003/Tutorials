#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int product;
    int num;

    std::cout<<"Enter the Number = ";
    cin>>num;
    cout<<"The table of following number = "<<endl;
     for (int i = 1; i<=10 ; i++)
     {
        /* code */
        product=num*i;
        cout<<num<<"*"<<i<<"="<<product<<endl;
     }

     return 0;
}
     