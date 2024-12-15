#include <iostream>
using namespace std;

// function without argument and no return type
void printstar()
{
    cout << '*' << endl; // single character
    cout << "*****" << endl;
}

// function with no return type and having arguments
void printname(string name) // function name
{
    cout << name << " Prajapati" << endl;
}

// function with return type but without arguments
int sum1()
{
    int x = 10, y = 20;
    return x + y;
}
// function with return type and having arguments
int sum2(int a, int b)
{
    int sum = a + b;
    // cout<<"Sum of "<<a<<" and "<<b<<" is = "<<sum;
    return sum;
}

//Default argument
void myName(string name = "Manish") {
  cout <<"My name is " << name<<"\n";
}
int main()
{
    printstar();
    printname("Manish");
    int s2 = sum2(12, 13);
    cout << "The Sum = " << s2<<endl;

    int s1=sum1();
    cout<<"Sum of 10 and 20 is = "<<s1<<endl;
    myName("Shubham");
    myName("Naveen");
    myName();//default value

    return 0;
}