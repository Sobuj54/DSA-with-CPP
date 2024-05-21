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
        this->cls = cls;
        this->roll = roll;
        this->cgpa = cgpa;
    }
};

int main()
{
    // Student a(10, 64, 3.5);
    Student *sobuj = new Student(14, 64, 3.5); // dynamic object
    cout << sobuj->roll << " " << sobuj->cls << " " << sobuj->cgpa << endl;
    return 0;
}