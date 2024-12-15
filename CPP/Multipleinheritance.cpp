#include<iostream>
using namespace  std;

// base class 1
class Base1{
protected:
    int base1int;

public:
    void setvalue1(int a)
    {
        base1int = a;
    }
};

//base class 2
class Base2{
protected:
    int base2int;

public:
    void setvalue2(int b)
    {
        base2int = b;
    }
};

// base class 3
class Base3{
protected:
    int base3int;

public:
    void setvalue3(int c)
    {
        base3int = c;
    }
};

// derived class from Base1,Base2,Base3
class Derived : public Base1, public Base2, public Base3
{
    public: 
        void show(){
            cout << "The value of Base1 is " << base1int<<endl;
            cout << "The value of Base2 is " << base2int<<endl;
            cout << "The value of Base3 is " << base3int<<endl;
        }

        void sum(){
            cout << "The sum of these values is " << base1int + base2int + base3int << endl;
        }
};

int main()
{
    Derived obj;
    obj.setvalue1(5);
    obj.setvalue2(25);
    obj.setvalue3(10);
    obj.show();
    obj.sum();
    return 0;
}
