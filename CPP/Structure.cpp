#include <iostream>
using namespace std;

// declaring structure
struct student
{
    // declaring variables
    string name;
    int age;
    float marks;
} s1 = {"Manish", 19, 93}; // declaration and intialization of strcture variable outside the main

int main()
{
    struct student s2 = {"Shubham", 20, 98}; // declaring and intailizing structure variable inside main
    struct student s3;
    s3.name = "Naveen";
    s3.age = 18;
    s3.marks = 100;

    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.marks << endl;

    cout << s2.name << endl;
    cout << s2.age << endl;
    cout << s2.marks << endl;

    cout << s3.name << endl;
    cout << s3.age << endl;
    cout << s3.marks << endl;

    return 0;
}