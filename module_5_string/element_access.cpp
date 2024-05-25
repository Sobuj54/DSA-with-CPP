#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "sobuj";
    cout << s[0] << endl;
    cout << s.at(0) << endl;
    cout << s.at(s.size() - 1) << endl; // gets last string character
    cout << s.back() << endl;           // last character
    cout << s.front() << endl;          // first character of string
    return 0;
}