#include<iostream>
using namespace std;

void printline()
{
    cout<<"*"<<endl;
}
void printline(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"*";
    }
    cout<<endl;
}
void printline(char ch)
{
    for (int i = 0; i < 5; i++)
    {
        cout<<ch;
    }
    cout<<endl;
}
void printline(char ch,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<ch;
    }
}
int main(){
printline();
printline('?');
printline(10); 
printline('$',10);

return 0;
}