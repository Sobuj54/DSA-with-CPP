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
    cout << endl;

    // selection sort for array of objects
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].age >= a[j].age)
            {
                if (a[i].age == a[j].age)
                {
                    if (a[i].roll > a[j].roll)
                        swap(a[i], a[j]);
                }
                else
                    swap(a[i], a[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].age << endl;
    }

    return 0;
}