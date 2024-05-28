#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int roll;
};

bool cmp(Student a, Student b)
{
    // if (a.age >= b.age)
    //     return true;
    // else
    //     return false;
    // above code in shorthand
    return a.age >= b.age; // this will sort the array in descending order
}

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
    cout << endl;

    // sort objects using built in sort() function
    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].age << endl;
    }

    return 0;
}