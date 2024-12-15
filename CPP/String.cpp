#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int marksofmath,marksofscience,marksofeng;
    float total;
    float percentage;

    cout<<"Enter the name of student = ";
    getline(cin,name);//getline is used to take full name from user while if we use cin it only take one string
    // cout<<"Enter the marks of Mathematics = ";
    // cin>>marksofmath;
    // cout<<"Enter the marks of Science = ";
    // cin>>marksofscience;
    // cout<<"Enter the marks of English = ";
    // cin>>marksofeng;

    // total=marksofmath+marksofeng+marksofscience;
    // cout<<"Total marks of "<<name<<" is = "<<total;
    // percentage=total/300*100;
    // cout<<"\nPercentage = "<<percentage;

    cout<<name.length();//lenth function is used to find the length of any string

    return 0;

}