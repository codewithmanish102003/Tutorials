#include <iostream>
using namespace std;

class Simple
{

public:
    int a;
    void setvalue(int num)
    {
        a = num;
    }
};

int main()
{
    Simple *ptr; // pointer of class
    Simple obj;
    ptr = &obj;
    //using dereference and dot operator
    (*ptr).setvalue(7);
    cout << "Value of a is = " << ptr->a<<endl;
    //using arrow operator
    ptr->setvalue(45);
    cout << "Value of a is = " << ptr->a;
    //deallocating memory
    delete ptr;
    return 0;
}