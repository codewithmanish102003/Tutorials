#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNo;

public:
    void setRoll(int roll)
    {
        rollNo = roll;
    }

    void getroll()
    {
        cout << "The Roll number is :: " << rollNo << endl;
    }
};

class Test : virtual public Student
{
protected:
    int Science;
    int Mathematics;

public:
    void setMarks(float S, float M)
    {
        Science = S;
        Mathematics = M;
    }

    void getMarks()
    {
        cout << "The Marks Of Test are : " << endl
             << "Science : " << Science << endl
             << "Mathematics : " << Mathematics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    int Score;

public:
    void setScore(int Scr)
    {
        Score = Scr;
    }
    void getScore()
    {
        cout << "Your Score in Sports out of 10 are :: " << Score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    int Total;

public:
    void Display()
    {
        Total = Science + Mathematics + Score;
        getroll();
        getMarks();
        getScore();

        cout << "Total Marks = " << Total;
    }
};

int main()
{

    Result R;
    R.setRoll(28);
    R.setMarks(94,98);
    R.setScore(9);
    R.Display();

    return 0;
}