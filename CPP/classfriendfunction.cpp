#include <iostream>
using namespace std;

class Complex; // forward declaration

class Sum
{
public:
    // friend of complex function declaration
    Complex SumComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // declaration of friend function for class Sum
    friend Complex Sum::SumComplex(Complex, Complex);

public:
    void setNumber(int n1, int n2)
    {

        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

// friend function defination for Complex
Complex Sum::SumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, result;

    c1.setNumber(1, 3);
    c1.printNumber();

    c2.setNumber(3, 4);
    c2.printNumber();
    Sum Comp;
    result = Comp.SumComplex(c1, c2);
    result.printNumber();

    return 0;
}