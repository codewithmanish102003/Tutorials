#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int sum;

    std::cout << "Enter value of num1 = "; // << is known as insertion operator
    cin >> num1;// >> is known as extraction operator
    std::cout << "Enter value of num2 = ";
    cin >> num2;
    sum = num1 + num2;
    std::cout << "The Sum of " << num1 << " and " << num2 << " = " << sum;
    return 0;
}