#include <iostream>
using namespace std;

int main()
{
    // intialising Array elements
    //int num[5] = {1, 2, 3, 4, 5};
    int num[5];

    // take array elements from the user
    cout << "Input the array elements :";
    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
    }

    cout << "The Array elements are : " << endl;
    // Accessing Array Elements
    //  cout << num[0]<<endl;
    //  cout << num[1]<<endl;
    //  cout << num[2]<<endl;
    //  cout << num[3]<<endl;
    //  cout << num[4]<<endl;

    int sum = 0;

    float avg;

    // Accessing Array elements through an loop
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << endl;
        sum = sum + num[i];
    }

    //finding number of elements
    int nofelemnts=sizeof(num)/sizeof(int);
    //finding average of elements
    avg = sum / nofelemnts;

    cout << "The average is = " << avg;
    return 0;
}
