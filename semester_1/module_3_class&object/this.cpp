#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls;
    int roll;
    float cgpa;

    Student(int cls, int roll, float cgpa)
    {
        // this is pointer that points to the class of a specific object
        // this keyword is used when the variables inside the class has the same name of constructor parameter
        // (*this).cls = cls;
        // (*this).roll = roll;
        // (*this).cgpa = cgpa;

        // another way of writing the same code
        this->cls = cls;
        this->roll = roll;
        this->cgpa = cgpa;
    }
};

int main()
{
    Student a(10, 64, 3.5);
    cout << a.roll << " " << a.cls << " " << a.cgpa << endl;
    return 0;
}