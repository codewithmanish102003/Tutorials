#include <iostream>
using namespace std;

class Array
{
    int arr[5];

public:
    getElement()
    {
        cout << "Enter the array elements : \n";
        for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
        {
            cout << "\nThe " << i + 1 << " element of array = ";
            cin >> arr[i];
        }
    }

    void display()
    {
        cout << "The array elements are : ";
        for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
        {
            cout <<arr[i]<<endl;
        }
    }
};

int main()
{

    cout << "Array witth in class." << endl;
    Array arr;
    arr.getElement();
    arr.display();

    return 0;
}