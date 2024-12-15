#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3];

    cout << "Enter the elements = ";
    for (int i = 1; i <=3; i++)//input the elements from user
    {
        for (int j = 1; j <=3; j++)
        {
               cin >> matrix[i][j];
        }
    }

    cout << "the elements of matrix are following :"<<endl;
    for (int i = 1; i <=3; i++)//input the elements from user
    {
        for (int j = 1; j <=3; j++)
        {
               cout << matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}