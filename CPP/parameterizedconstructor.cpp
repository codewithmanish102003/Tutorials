// CPP program to illustrate
// parameterized constructors
#include <iostream>
using namespace std;

class Point {
private:
	int x, y;

public:
	// Parameterized Constructor
	Point(int a, int b)
	{
		x = a;
		y = b;
	}

  void displaypoint()
  {
    cout<<"("<<x<<","<<y<<")"<<endl;
  }
};

int main()
{
	// Constructor called
	Point p1(10, 15); //implicit call

	// Access values assigned by constructor
   cout<<"point p1";
   p1.displaypoint();

   Point p2=Point(2,3);//explicit call
   p2.displaypoint();

	return 0;
}
