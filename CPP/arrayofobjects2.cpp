#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    int salary;

public:
    Employee(int x, int y)
    {
        id = x;
        salary = y;
    }
    // void getIdsalary()
    // {
    //     cout << "Enter the id of Employee = ";
    //     cin >> id;
    //     cout << "Enter the Salary of Employee = ";
    //     cin >> salary;
    // }

    void Display()
    {
        cout << "The salary of employee " << id << " is = " << salary << endl;
    }
};

int main()
{
    Employee ob[3] = {Employee(1, 10000), Employee(2, 20000), Employee(3, 30000)}; //this Syntax is allowed for only Constructor functions or we have to create an outsider/explicit functions to use this syntax arrayofobjects2

    // Employee ob[5];// Array of objects
    // for (int i = 0; i < 5; i++)
    // {
    //     ob[i].getIdsalary();
    // }
    cout << "\nThe Salary of employes are : " << endl;
    for (int i = 0; i < 5; i++)
    {
        ob[i].Display();
    }

    return 0;
}