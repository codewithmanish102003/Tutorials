// class template with default parameters
#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = string>

class Number
{
public:
    T1 data1;
    T2 data2;
    T3 data3;
    Number(T1 a, T2 b, T3 c)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void Display()
    {
        cout << "value of data1 is = " << data1 << endl;
        cout << "value of data2 is = " << data2 << endl;
        cout << "value of data3 is = " << data3 << endl;
    }
};
int main()
{
    // calling default parameter templatae
    Number<> myobj(10, 7.4, "Hello world!");
    myobj.Display();
    // calling with manual template parameters
    Number<float, char, int> myobj2(56.8, 'y', 78);
    myobj2.Display();
    return 0;
}