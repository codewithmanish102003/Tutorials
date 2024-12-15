// #include <iostream>
// using namespace std;

// // 1.Unary Operator Overloading
// //  same for ++ and --
// class Count
// {
// private:
//     int value;

// public:
//     // Intializing Constructor
//     Count(int a)
//     {
//         value = a;
//         cout << "value before overloading : " << value << endl;
//     }

//     // overloading ++ as prefix
//     void operator++()
//     {
//         ++value;
//     }

//     // overloading ++ as prefix
//     void operator++(int)
//     {
//         value++;
//     }

//     void display()
//     {
//         cout << value << endl;
//     }
// };

// int main()
// {
//     Count obj(5);

//     obj++;
//     cout << "Value after postfix ++ overloading : ";
//     obj.display();

//     ++obj;
//     cout << "Value after ++ prefix overloading : ";
//     obj.display();

//     return 0;
// }

// //2.Returning value from Operator
// #include <iostream>
// using namespace std;

// class Count {
//    private:
//     int value;

//    public:
//     // Constructor to initialize count to 5
//     Count() : value(5) {}

//     // Overload ++ when used as prefix
//     Count operator ++ () {
//         Count temp;

//         // Here, value is the value attribute of the calling object
//         temp.value = ++value;

//         return temp;
//     }

//     // Overload ++ when used as postfix
//     Count operator ++ (int) {
//         Count temp;

//         // Here, value is the value attribute of the calling object
//         temp.value = value++;

//         return temp;
//     }

//     void display() {
//         cout << "Count = " << value << endl;
//     }
// };

// int main() {
//     Count count1, result;

//     // Call the "Count operator ++ ()" function
//     result = ++count1;
//     cout<<"After prefix Increment "<<endl;
//     result.display();

//     // Call the "Count operator ++ (int)" function
//     result = count1++;
//     cout<<"After Postfix Increment "<<endl;
//     result.display();

//     return 0;
// }

// 3.Binary Operator Overloading
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    void print() { cout << real << " + i" << imag << endl; }

    Complex operator+(const Complex &c2) const // Corrected binary operator overload
    {
        return Complex(real + c2.real, imag + c2.imag);
    }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+"
    c3.print();
    return 0;
}

