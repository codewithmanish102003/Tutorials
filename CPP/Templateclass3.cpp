// class template with multiple parameters
#include <iostream>
using namespace std;

template <class T1, class T2>

class Number
{
public:
    T1 data1;
    T2 data2;
    Number(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }

    void Display(){
        cout<<"value of data1 is = "<<data1<<endl;
        cout<<"value of data2 is = "<<data2<<endl;
    }
};
int main()
{
    Number<int,string>myobj(10,"Hello world!");
    myobj.Display();
    return 0;
}