#include <bits/stdc++.h>
using namespace std;

namespace sobuj
{
    int age = 24;
    string name = "sobuj";
    void print()
    {
        cout << "inside namespace" << endl;
    }
};

int main()
{
    sobuj::print();
    cout << sobuj::name << endl;
    return 0;
}