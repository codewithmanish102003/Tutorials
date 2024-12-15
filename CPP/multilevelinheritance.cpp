#include <iostream>
using namespace std;

//Student-->Exam-->Result

//grandfather
class Student
{
protected:
    int rollNo;

public:
    void setRoll(int Roll)
    {
        rollNo = Roll;
    }

    void getRoll()
    {
        cout << "The Roll number of student is : " << rollNo << endl;
    }
};

//father
class Exam : public Student
{
protected:
    int Maths;
    int Science;

public:
    void setMarks(int marks1, int marks2)
    {
        Maths = marks1;
        Science = marks2;
    }

    void getMarks()
    {
        cout << "The marks of Maths are : " << Maths << endl;
        cout << "The marks of Science are : " << Science << endl;
    }
};

// Current Generation
class Result : public Exam
{
private:
    float percentage;

public:
    void getResult()
    {
        percentage = (Maths + Science) / 2;
        getRoll();
        getMarks();
        cout << "Percentage : " << percentage;
    }
};

int main()
{

    Result Manish;
    Manish.setRoll(12);
    Manish.setMarks(98, 94);
    Manish.getResult();

    return 0;
}