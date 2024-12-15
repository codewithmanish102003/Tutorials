#include <iostream>
using namespace std;

class Demo
{
private:
    int var1;
    int var2;

public:
    Demo() //Constructor 1
    {
        var1 = 7;
        var2 = 30;
    }

    Demo(int x, int y) //Constructor 2
    {
        var1 = x;
        var2 = y;
    }
     Demo(double x,double y) //Constructor 3
    {
        var1 = x;
        var2 = y;
    }

    void show(){
        cout<<"value of var1 = "<<var1<<endl;
        cout<<"value of var2 = "<<var2<<endl;
    }
};

int main(){

    Demo ob,ob1(10,20),ob2(1.2,3.4);
    ob.show();
    ob1.show();
    ob2.show();
    
    return  0;
}