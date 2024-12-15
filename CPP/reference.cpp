#include<iostream>
using namespace std;

int a=34;//global variable

int main()
{
int a;
int &b = a;//&b is areference variable
b=35;

cout<<a<<endl;
cout<<b<<endl;

//accessing a global variable
cout<<::a;//accessing a global variable through scope resolution operator

return 0;
}