#include<iostream>
using namespace std;

class Base1{
    public:
    void greet(){
        cout<<"How are you?"<<endl;
    }
};

class Base2{
    public:
    void greet(){
        cout<<"Kaise ho?"<<endl;
    }
};

class Derived:public Base1,public Base2{
    public:
    void greet(){
      //  greet();  //error
          Base1::greet(); //To solve the ambiguity we can use scope/class resolution operator
          Base2::greet();
    }
};



int main(){

    Derived D;
    D.greet();

    return 0;
}