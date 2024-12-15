#include<iostream>
using namespace std;

class A
{
private:
    int x;
    int y;
public:
//constructor
    A(int a,int b){

        x=a;
        y=b;

    }

    void set(int a,int b){
        x=a;
        y=b;
    }

    void show(){
        cout<<x<<endl<<y;
    }

};

int main(){

    A obj(10,20); //class constructor will be called automatically when an object for given class is created.
   // A obj(90,100);  redeclaration of an class constructor will cause error
   obj.set(90,100);
    obj.show();

    return 0;
}