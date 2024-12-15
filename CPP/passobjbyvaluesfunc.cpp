#include <iostream>
using namespace std;

class Complex
{

    int a;
    int b;

public:
    void getCompnum(int x, int y)
    {
        a = x;
        b = y;
    }

    void sumofnum(Complex ob1, Complex ob2)
    {
        a = ob1.a=10 + ob2.a;
        b = ob1.b + ob2.b;
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{

    Complex num1, num2, num3;
    cout << "First complex number : ";
    num1.getCompnum(1, 2);
    num1.printNumber();

    cout << "Second complex number : ";
    num2.getCompnum(3, 4);
    num2.printNumber();

    cout << "The Sum of Complex numbers is : ";
    num3.sumofnum(num1, num2);
    num3.printNumber();

    num1.printNumber();//changes makes inside the function can not change the value of original object

    return 0;
}