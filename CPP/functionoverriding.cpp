#include <iostream>
using namespace std;

class Base
{
public:
    void print()
    {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base
{
public:
    // Base class function is override by Derived class
    void print()
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
    Derived derived1;

    derived1.print();
    // accessing base class function by using scope Resolution Operator and Derived class object
    derived1.Base::print();
    return 0;
}