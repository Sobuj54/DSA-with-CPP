#include <iostream>
using namespace std;

int main()
{
    // size of data types
    int x;
    cout << "size of int : " << sizeof(x) << endl;

    float y;
    cout << "size of float : " << sizeof(y) << endl;

    char c;
    cout << "size of char : " << sizeof(c) << endl;

    bool b;
    cout << "size of bool : " << sizeof(b) << endl;

    // type modifiers such as signed, unsigned,long, short
    long int li;
    cout << "size of longInt : " << sizeof(li) << endl;

    short int si;
    cout << "size of shortInt : " << sizeof(si) << endl;
    return 0;
}