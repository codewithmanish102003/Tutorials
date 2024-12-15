#include <iostream>
using namespace std;

class Employee
{
    int id;
    int Salary;
    static int count; // static data member

public:
    void setvalue()
    {
        cout << "Enter the Id = ";
        cin >> id;
        cout << "Enter the salary = ";
        cin >> Salary;
        count++;
    }

    void getvalue()
    {
        cout << "The salary of employee " << count << " is = " << Salary << endl;
    }
};
int Employee::count; // default value of is 0

int main()
{
    Employee e1, e2, e3;

    e1.setvalue();
    e1.getvalue();

    e2.setvalue();
    e2.getvalue();

    return 0;
}