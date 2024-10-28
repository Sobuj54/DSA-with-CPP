#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    cout << s << "\n";

    s.push_back('s'); // adds a character to the last
    cout << s << "\n";

    cout << s.front() << "\n"; // gives the first character of a string
    cout << s.back() << "\n";  // gives the last character of a string

    cout << s.empty() << "\n"; // returns true or false
    s.clear();                 // empties the string

    string l;
    cin >> l;                       // if the string is "metroman"
    cout << l.substr(0, 3) << "\n"; // this will be "met"
    cout << l.substr(2) << "\n";    // this will be "troman"
    return 0;
}