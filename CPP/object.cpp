#include <iostream>
using namespace std;
class Box
{
 private:
    int x;
    int y;

public:
    void set(int a, int b)
    {
        x = a;
        y = b;
    }
    void show()
    {
        cout << "x = " << x <<endl;
        cout << "y = " << y <<endl;
    }
};

int main()
{
    //declaring object name
    Box ob1;
    Box ob2;

    //calling functions inside clasees via objects
    ob1.set(12, 20);
    ob2.set(40,50);
    ob2.show();

    return 0;
}
