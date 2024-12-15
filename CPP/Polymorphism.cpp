#include <iostream>
using namespace std;

// Base Class
class Animal
{
public:
    void animalsound()
    {
        cout << "The Animal Makes a sound = \n";
    }
};

//Derived Class
class Pig : public Animal
{
    public:
    void animalsound()
    {
        cout<<"The pig says : wee weew \n";
    }
};

//Derived Class
class Dog: public Animal
{
    public:
    void animalsound()
    {
        cout<<"The dog says : bow bow \n";
    }
};

int main()
{
    //making objects for each class
    Animal myanimal;
    Pig mypig;
    Dog mydog;

    //caliing functions inside classes via objects
    myanimal.animalsound(); //classname.functioname();
    mypig.animalsound();
    mydog.animalsound();

    return 0;
}
