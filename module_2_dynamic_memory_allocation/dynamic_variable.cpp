#include <iostream>
using namespace std;

int *func()
{
    int *a = new int;
    *a = 200;
    return a;
}

int main()
{
    int *p = new int; // dynamic memory
    *p = 100;
    cout << *p;

    int *x = func();
    cout << "func " << *x;

    return 0;
}