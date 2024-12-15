///pointer to  data member iof a class
#include <iostream>
using namespace std;

class Simple
{
public:
    int a;
};

int main()
{
    Simple obj;
    int Simple::*ptrToMember = &Simple::a; // pointer to data member 'a' of class 'Simple'

    obj.*ptrToMember = 7; // access data member 'a' of object 'obj' through pointer 'ptrToMember'
    cout << "Value of a is = " << obj.a << endl;

    return 0;
}