#include <iostream>
using namespace std;

class Y; // forward declaration of class Y

class X
{
    int num1;
    //declaration of friend function
    friend int printSum(X, Y);

public:
    int getnum1()
    {
        cout << "Enter the first value : ";
        cin >> num1;
    }
};

class Y
{
    int num2;
    //declation o friend function
    friend int printSum(X, Y);

public:
    int getnum2()
    {
        cout << "Enter the 2nd value : ";
        cin >>num2;
    }
};

int printSum(X n1, Y n2)
{
    int Sum = n1.num1 + n2.num2;
    cout << "Sum of Numbers : " << Sum;
}

int main()
{
    X first;
    first.getnum1();
    Y second;
    second.getnum2();
    printSum(first, second);

    return 0;
}