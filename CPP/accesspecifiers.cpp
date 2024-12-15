#include <iostream>
using namespace std;

class MyClass
{
public:    // Public access specifier
    int x=25; // Public attribute
private:   // Private access specifier
    int y=30; // Private attribute
};

int main()
{
    MyClass myObj;
    myObj.x; // Allowed (x is public)
    cout << myObj.x<<endl;
     myObj.y; //  not Allowed (y is private)
    cout << myObj.y<<endl;
    return 0;
}