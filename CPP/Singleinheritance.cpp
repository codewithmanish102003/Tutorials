#include <iostream>
using namespace std;

class Base
{
private:
    int data1;//can not be inheriated due to private visibility

public:
    int data2;

    void setdata(int x,int y)
    {
        data1 = x;
        data2 = y;
    }
    int getdata1()
    {
        return data1;
    }
    int getdata2()
    {
        return data2;
    }
};

class Derived : public Base
{
    int data3;

public:
    void process()
    {
        data3 = getdata1() + data2; //data1 can not be inheriated but we can take the value from getdata1() function
    }

    void display()
    {
        cout << "The value of data1 is : " << getdata1() << endl;
        cout << "The value of data2 is : " << data2 << endl;
        cout << "The Value of data3 is : " << data3;
    }
};

int main()
{

    Derived Add;
    Add.setdata(100,200);
    Add.process();
    Add.display();
}