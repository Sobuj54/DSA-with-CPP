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

Student *func()
{
    Student *sobuj = new Student(14, 64, 3.5); // dynamic object
    return sobuj;
}

int main()
{
    // Student a(10, 64, 3.5);
    Student *s = func();
    cout << s->roll << " " << s->cls << " " << s->cgpa << endl;

    delete s;
    return 0;
}