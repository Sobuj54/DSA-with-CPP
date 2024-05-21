#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[50];
    int roll;
    float cgpa;
};

int main()
{
    Student a, b;
    // a.roll = 64;
    // a.cgpa = 3.5;
    // char temp[50] = "sobuj";
    // strcpy(a.name, temp);
    cin.getline(a.name, 50);
    cin >> a.roll >> a.cgpa;
    cout << a.roll << " " << a.name << " " << a.cgpa << endl;

    getchar();
    cin.getline(b.name, 50);
    cin >> b.roll >> b.cgpa;
    cout << b.roll << " " << b.name << " " << b.cgpa << endl;
    return 0;
}