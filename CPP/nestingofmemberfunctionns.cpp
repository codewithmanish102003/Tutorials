#include <iostream>
#include<string>
using namespace std;

class Binary
{
private: // private members can not be accessed by any user or not used by main() function
    string num;

    void checkbin()
    {
        for (int i = 0; i < num.length(); i++)
        {

            if (num.at(i) != '0' && num.at(i) != '1')
            {
                cout << "Incorrect Binary format" << endl;
                exit(0);
            }
        }
    }
    void displayComplement()
    {
        cout << "Complement Of Number = ";
        for (int i = 0; i < num.length(); i++)
        {
            cout << num.at(i);
        }
    }

public: // while public membbers can be accessed by anyone or in main() function
    void getbinary()
    {
        cout << "Enter a binary No : ";
        cin >> num;
        // Nesting of member function
        checkbin();
    }

    void display()
    {
        cout << "You have written = ";
        for (int i = 0; i < num.length(); i++)
        {
            cout << num.at(i);
        }
        cout<<endl;
    }

    void onesComplement()
    {
        for (int i = 0; i < num.length(); i++)
        {
            if (num.at(i) == '0')
            {
                num.at(i) = '1';
            }
            else
            {
                num.at(i) = '0';
            }
        }
        //nesting of member function
        displayComplement();
    }
};

int main()
{

    Binary B;
    B.getbinary();
    B.display();
    B.onesComplement();

    return 0;
}