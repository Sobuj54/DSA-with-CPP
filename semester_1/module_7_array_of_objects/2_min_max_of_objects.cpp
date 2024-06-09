#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int roll;
};

int main()
{
    int n;
    cin >> n;
    Student a[n]; // array of  objects
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].age >> a[i].roll;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " age: " << a[i].age << " roll: " << a[i].roll << endl;
    }

    // create another object to find max object
    Student mx;
    mx.age = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i].age > mx.age)
        {
            mx = a[i];
        };
    }
    cout << "max object is :" << mx.name << " " << mx.age << endl;

    // create another object to find minimum object
    Student mn;
    mn.age = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i].age < mn.age)
        {
            mn = a[i];
        };
    }
    cout << "min object is :" << mn.name << " " << mn.age << endl;
    return 0;
}