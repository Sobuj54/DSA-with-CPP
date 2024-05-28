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
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].age >> a[i].roll;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " age: " << a[i].age << " roll: " << a[i].roll << endl;
    }
    return 0;
}