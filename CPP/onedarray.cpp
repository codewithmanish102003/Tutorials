#include <iostream>
using namespace std;

int main()
{
    int num[10];

    cout << "Enter the array elements = ";
    for (int i = 0; i < 10; i++)//input the elements from user
    {
        cin >> num[i];
    }

    cout << "the elements of arrray are following :";
    for (int i = 0; i < 10; i++)//printing the elements on the console
    {
        cout << num[i] << endl;
    }

    return 0;
}