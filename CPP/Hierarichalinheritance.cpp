#include <iostream>  
using namespace std;  
class Shape                 // Declaration of base class.  
{  
    public:  
    int length;  
    int breadth;  
    void get_data(int a,int b)  
    {  
        length= a;  
        breadth = b;  
    }  
};  
class Rectangle : public Shape  // inheriting Shape class  
{  
    public:  
    int rect_area()  
    {  
        int result = length*breadth;  
        return result;  
    }  
};  
class Triangle : public Shape    // inheriting Shape class  
{  
    public:  
    int triangle_area()  
    {  
        float result = 0.5*(length*breadth); //length=base and breadth=height of traingle 
        return result;  
    }  
};  
int main()  
{  
    Rectangle r;  
    Triangle t;  
    
    r.get_data(12,5);
    cout<<"Area Of rectangle is = "<<r.rect_area()<<"squre unit"<<endl;

    t.get_data(12,5);
    cout<<"Area of traingle = "<<t.triangle_area()<<"squre unit"<<endl;
     
    return 0;  
}  