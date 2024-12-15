#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int product;

    std::cout << "Enter value of a = ";
    cin >> a;
    std::cout << "Enter value of b = ";
    cin >> b;
    product = a * b;
    std::cout << "The product of a and b = " << product;
    return 0;
}