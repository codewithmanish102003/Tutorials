#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
void setdata(int a,int b){
    real=a;
    imaginary=b;
}

void getdata(){
    cout<<"The real part is "<<real<<endl;
    cout<<"The imaginary part is "<<imaginary<<endl;
}
};

int main(){
    Complex c1;
    // c1.setdata(1,20);
    // c1.getdata();

    // Complex *ptr=&c1;
    // (*ptr).setdata(2,3);
    // (*ptr).getdata();

    //Intializing the pointer variable of object using new keyword

    Complex *ptr=new Complex;
    ptr->setdata(3,4);
    ptr->getdata();

    return 0;
}