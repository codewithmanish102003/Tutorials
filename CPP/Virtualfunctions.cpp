#include <iostream>
using namespace std;

class Base
{
public:

    virtual void display()
    // void display()
    {
        cout << "Base class is invoked" << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "Derived Class is invoked" << endl;
    }
};
int main()
{
    Base *base_class_pointer; // pointer of base class
    Derived obj_derived;  // object of derived class
    base_class_pointer = &obj_derived;
    base_class_pointer->display(); // Late Binding occurs

    return 0;
}