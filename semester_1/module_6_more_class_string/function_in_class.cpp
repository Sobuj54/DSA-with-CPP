#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void print()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    Person s("sobuj ahmed", 24);
    s.print();
    return 0;
}