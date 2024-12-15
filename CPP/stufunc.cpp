#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    float marks;
};

void takeinput(student s[], int n)
{

    cout << "Input the informations of students : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Full name: ";
        cin >> s[i].name;
        cout << "Enter age: ";
        cin >> s[i].age;
        cout << "Enter marks: ";
        cin >> s[i].marks;
    }
}
void show(student s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << "\nThe Information of students are" << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Age: " << s[i].age << endl;
        cout << "marks: " << s[i].marks << endl;
    }
}

int main()
{
    int size;
    cout<<"Enter the No Of Students : ";
    cin>>size;
    student s[size];
    
    takeinput(s,size);
    show(s,size);

    return 0;
}
