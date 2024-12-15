#include <iostream>
using namespace std;
int a;//global variable
int main()
{
    a=10;
    int a=20;//a global and local variable can  have same name
    bool b=true;
    string c="Manish";
    //if we not write using namespace std then we have to use std::cout for print anything
    //std::cout << "Hello World";
    //or if we write using namespace std then we can write only as
    cout<<"Hello World\n";
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<sizeof(c);

    return 0;
}
