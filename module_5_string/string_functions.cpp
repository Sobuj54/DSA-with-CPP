#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "sobuj";
    cout << s << endl;
    cout << "String length : " << s.size() << endl; // this gives us the length of string
    cout << "Max size of string: " << s.max_size() << endl;
    cout << "Max capacity of string: " << s.capacity() << endl;
    // s.clear(); it clears out the string..the length becomes zero

    if (s.empty()) // empty() returns boolean
        cout << "empty" << endl;
    else
        cout << "Not empty" << endl;

    // s.resize(5); string size will become 5
    return 0;
}