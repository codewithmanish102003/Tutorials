#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {

        a = n1;
        b = n2;
    }
    //declaration of friend function
    friend Complex SumComplex(Complex o1, Complex o2);
    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

//friend function defination for Complex
Complex SumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;

    c1.setNumber(1, 3);
    c1.printNumber();

    c2.setNumber(3, 4);
    c2.printNumber();

    sum = SumComplex(c1, c2);
    cout<<"Sum of Numbers is : ";
    sum.printNumber();

    return 0;
}