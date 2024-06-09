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
};

int main()
{
    Person *sobuj = new Person("sobuj ahmed", 24);
    Person *akib = new Person("akib", 22);

    // copy akib object to sobuj by dereferencing them
    *sobuj = *akib;

    cout << sobuj->name << " " << akib->name << endl;
    return 0;
}