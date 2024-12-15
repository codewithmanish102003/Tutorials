#include <iostream>
using namespace std;
int main()
{
    int amount;
    int rateofgst;
    float GST;
    int Price;

    std::cout << "Enter the amount = ";
    cin >> amount;
    std::cout << "Enter the rate = ";
    cin >> rateofgst;

    GST = amount * rateofgst / 100;

    std::cout << "GST = " << GST << endl;

    Price = amount + GST;

    std::cout << "Acctual Price = " << Price;

    return 0;
}