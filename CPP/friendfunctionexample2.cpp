#include <iostream>
using namespace std;

class Y; // forward declaration of class Y

class X
{
    int num1;
    // declaration of friend function
    friend int sWap(X &, Y &);//pass by reference

public:
    int getnum1()
    {
        cout << "Enter the first value : ";
        cin >> num1;
    }
    void display()
    {
        cout << "The value of num1 = " << num1 << endl;
    }
};

class Y
{
    int num2;
    // declation of friend function
    friend int sWap(X &, Y &);//pass by reference

public:
    int getnum2()
    {
        cout << "Enter the 2nd value : ";
        cin >> num2;
    }
    void display()
    {
        cout << "The value of num2 = " << num2 << endl;
    }
};

int sWap(X &n1, Y &n2)
{
    int temp;
    temp = n1.num1;
    n1.num1 = n2.num2;
    n2.num2 = temp;
}

int main()
{
    X first;
    first.getnum1();
    Y second;
    second.getnum2();
    cout << "Values before swapping : " << endl;
    first.display();
    second.display();
    sWap(first, second);
    cout << "Values After swapping : " << endl;
    first.display();
    second.display();

    return 0;
}