#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int Division, Remainder;

    std::cout << "Enter value of num1 = ";
    cin >> num1;
    std::cout << "Enter value of num2 = ";
    cin >> num2;
    Division = num1 / num2;
    Remainder = num1 % num2;
    std::cout << "The Qutioent of num1/num2 = " << Division;
    std::cout << "\nThe Remainder of num1/num2 = " << Remainder;
    return 0;
}