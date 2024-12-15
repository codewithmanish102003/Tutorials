#include <iostream>
using namespace std;

int main()
{
    int a = 13;
    int *ptr1 = &a; // p points on adress of a
    // *ptr1=12;//modifying the pointer
    int *ptr2=NULL;


    cout << "Adress of a = " << &a << endl; // adress of a
    cout << "Adress of a = " << ptr1 << endl;
    cout << "value of a = " << *ptr1 << endl; // value of a
    cout << "value of a = " << a << endl;
    cout << "Adress of p = " << &ptr1 << endl;//Adress of pointer varible
    cout<<"Value of NULL pointer = "<<ptr2;

    //Pointer Aritmetic

    return 0;
}