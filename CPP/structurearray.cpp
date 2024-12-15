#include <iostream>
using namespace std;

// declaring structure
struct student
{
    // declaring variables
    string name;
    int age;
    float marks;
} s[3];

int main()
{
    for (int i = 0; i < 3; i++)
    {
        // inpput through keyboard
        cout<<"Enter the information of "<<i<<" student : "<<endl;
        cout << "Enter the name : ";
        cin >> s[i].name;
        cout << "Enter the Age : ";
        cin >> s[i].age;
        cout << "Enter the Marks : ";
        cin >> s[i].marks;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "You have write the information of student " << i << " : " << endl;
        cout << "Name = " << s[i].name << endl;
        cout << "Age = " << s[i].age << endl;
        cout << "Marks = " << s[i].marks << endl;
    }
    return 0;
}