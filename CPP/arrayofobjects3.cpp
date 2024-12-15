#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    int salary;

public:
    void setIdsalary(int x, int y) {
        id = x;
        salary = y;
    }

    void Display() {
        cout << "The salary of employee " << id << " is = " << salary << endl;
    }
};

// Function that creates and returns an Employee object after setting its values
Employee getEmployee(int id, int salary) {
    Employee emp;
    emp.setIdsalary(id, salary);
    return emp;
}

int main() {
    Employee ob[3] = {
        getEmployee(1, 10000),
        getEmployee(2, 20000),
        getEmployee(3, 30000)
    };

    cout << "\nThe Salary of employees are : " << endl;
    for (int i = 0; i < 3; i++) {
        ob[i].Display();
    }

    return 0;
}
