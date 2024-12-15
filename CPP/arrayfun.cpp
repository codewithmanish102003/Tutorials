#include<iostream>
using namespace std;

// //metod 1st
// int Stumarks(int marks[5]){
//     cout<<"The marks of students are = "<<endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<marks[i]<<endl;
//     }
// }
// method 2nd
int Stumarks(int marks[],int size){
    cout<<"The marks of students are = "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<marks[i]<<endl;
    }
}
int main(){
    int marks[]={12,24,54,23,54};
   // Stumarks(marks); metod 1 calling
   Stumarks(marks,10); //metod 2nd calling

    return 0;
}