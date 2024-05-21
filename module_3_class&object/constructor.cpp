#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls;
    int roll;
    float cgpa;

    Student(int cl, int r, float cg)
    {
        cls = cl;
        roll = r;
        cgpa = cg;
    }
};

int main()
{
    Student a(10, 64, 3.5);
    cout << a.roll << " " << a.cls << " " << a.cgpa << endl;
    return 0;
}