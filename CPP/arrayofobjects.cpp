#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    int salary;

public:
    void getIdsalary()
    {
        cout << "Enter the id of Employee = ";
        cin >> id;
        cout << "Enter the Salary of Employee = ";
        cin >> salary;
    }

    void Display()
    {
        cout << "The salary of employee " << id << " is = " << salary << endl;
    }
};

int main()
{
    Employee ob[5];// Array of objects
    for (int i = 0; i < 5; i++)
    {
        ob[i].getIdsalary();
    }
    cout << "\nThe Salary of employes are : " << endl;
    for (int i = 0; i < 5; i++)
    {
        ob[i].Display();
    }

    return 0;
}