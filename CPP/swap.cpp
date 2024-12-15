#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int temp;
    std::cout << "Enter value of num1 = ";
    cin >> num1;
    std::cout << "Enter value of num2 = ";
    cin >> num2;
    temp = num1;
    num1 = num2;
    num2 = temp;
    std::cout << "Value of num1 = " << num1;
    std::cout << "\nvalue of num2 = " << num2;
}