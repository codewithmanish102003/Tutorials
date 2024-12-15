//pointer to member function of class
#include <iostream>
using namespace std;

class Simple
{
public:
    void print()
    {
        cout << "Hello, World!" << endl;
    }
};

int main()
{
    Simple obj;
    void (Simple::*ptrToMemberFunc)() = &Simple::print; // pointer to member function 'print' of class 'Simple'

    (obj.*ptrToMemberFunc)(); // call member function 'print' of object 'obj' through pointer 'ptrToMemberFunc'

    return 0;
}