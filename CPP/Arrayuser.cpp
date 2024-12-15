#include <iostream>
#include<string>
using namespace std;

int main()
{
    int rows, cols;
    // Get the dimensions (rows and columns) from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    string arr[rows][cols];

    //taking the inputs from user
    cout<<"Enter the elements Of Array : "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    //print the 2d array
        cout<<"Enter the elements Of Array : "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
return 0;
}