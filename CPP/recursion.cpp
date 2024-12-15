#include<iostream>
using namespace std;

void printHello(int n) //recursive function
{
    if(n==0){
        return;
    }
    else{
        cout<<"Hello World!"<<endl;
        return printHello(n-1); //caliinf function itself and base condition
    }
}

int main()
{
    printHello(5);//function calling
    return 0;
}