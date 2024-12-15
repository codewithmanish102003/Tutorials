#include <iostream>
using namespace std;
int num;
int main()
{
    int num, i = 1;
    int rem;
    int reverse = 0;
    int sum=0;

    cout << "Enter the number = ";
    cin >> num;

    while (num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        sum = sum + rem;
        num = num / 10;
    }
    cout << "Reversed number is = " << reverse << endl;
    cout << "Sum of digits = " << sum;

    return 0;
}