#include <iostream>
using namespace std;

//Base Class
class Vehicle
{
public:
    string brand = "Ford";

    void show()
    {
        cout << "Cars are : \n";
    }
};

//Derived Class
class Car : public Vehicle
{
public:
    string model = "Mustang";
};

int main()
{
    Car mycar;
    mycar.show();
   //printing class values
   cout<<mycar.brand+" "+mycar.model;

    return 0;
}