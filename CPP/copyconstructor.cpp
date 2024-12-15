#include <iostream>
using namespace std;

class Number
{
private:
    int a;

public:
    // default Constructor
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    // copy constructor
    //When No copy constructor is created then compiler owm make it for us
    //so if we not use copy constructor no error will be occured
    Number(Number &refnceofobj)
    {
        cout << "copy constructor called !!!" << endl;
        a = refnceofobj.a;
    }

    void display(){
        cout<<"value of a = "<<a<<endl;
    }
};

int main()
{
    Number x, y, z(5);

    x.display();

    // Number x1(x);
    Number x1=x;//copy constructor called
    x1.display();

    Number y1=y;
    y1.display();

    Number z1=z;
    z1.display();

    return 0;
    
}