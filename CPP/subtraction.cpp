#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int subtraction;

    std::cout << "Enter value of a = ";
    cin >> a;
    std::cout << "Enter value of b = ";
    cin >> b;
    subtraction = a - b;
    std::cout << "The Subtraction of a and b = " << subtraction;
    return 0;
}