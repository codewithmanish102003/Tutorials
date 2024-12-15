#include <iostream>
using namespace std;

// declaring structure
struct student
{
    // declaring variables
    string name;
    int age;
    float marks;
} s1;

int main()
{
    //inpput through keyboard
    cout << "Enter the name : ";
    cin >> s1.name;
    cout << "Enter the Age : ";
    cin >> s1.age;
    cout << "Enter the Marks : ";
    cin >> s1.marks;

    cout << "You have write the information :" << endl;
    cout << "Name = "<<s1.name << endl;
    cout <<"Age = "<< s1.age << endl;
    cout << "Marks = "<< s1.marks << endl;
    return 0;
}