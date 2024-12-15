#include <iostream>
using namespace std;

class simple
{
private:
   int n;
   int m;

public:
    void getnum(int number,int i)
    {
        n = number;
        m=i;
    }
    // friend function declaration
    friend simple fact(simple ob);

    void dispaly()
    {
        cout << "factorial of " << m  << " is = " << n;
    }
};

// friend function defination
simple fact(simple ob)
{
    int fact = 1;
    int i;
    simple ob2;
    for (i = 1; i <= ob.n; i++)
    {
        fact = fact * i;
    }

    ob2.getnum(fact,i-1);
    return ob2;
}

int main()
{
    simple ob;
    ob.getnum(5,5);

    simple ob2;
    ob2=fact(ob);
    ob2.dispaly();

    return 0;
}