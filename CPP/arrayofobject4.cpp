#include <iostream>
using namespace std;

class Number {
     private:
         int x;
         int y;

         public:
         void set(int a,int b)
         {
            x=a;
            y=b;
         }
         void show(){
            cout<<"x : "<<x<<endl;
            cout<<"y : "<<y<<endl;
         }
};

int main() {
      Number *arr = new Number[4];
      Number *temparr=arr;//creating a another temp pointer variable for reseting the pointer because pointer is not rested itself
      
    // arr->set(10,20);
    // arr[0].set(10,20);
    // arr->show();

int num1,num2;
    cout<<"enter the values are : "<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"Enter "<<i+1<<" pair of x and y : "<<endl;
        cin>>num1;
        cin>>num2;

        arr->set(num1,num2);
        arr++;
    }
    cout<<"The values are : "<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of "<<i+1<<" pair is : "<<endl;
        temparr->show();
        temparr++;
    }
    
      delete[] arr;
      return 0;
}
