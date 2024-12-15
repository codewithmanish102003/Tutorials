#include <iostream>
using namespace std;
int count = 0;
class Number
{
public:
    // Constructor
    Number()
    {
        cout << "Constructor Invoked !!!" << endl;
    }

    // Destructor
    ~Number()
    {
        count++;
        cout << "Object " << count << " is destroyed !!!" << endl;
    }
};

int main()
{
    Number x;
    {
        cout<<"Entering this block."<<endl;
        cout<<"Exiting the block"<<endl;
    }

     Number y;
    {
        cout<<"Entering this block."<<endl;
        cout<<"Exiting the block"<<endl;
    }

    return 0;
}
