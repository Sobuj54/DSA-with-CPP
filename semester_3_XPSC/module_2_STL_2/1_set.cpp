/*
    characteristics of set:
    1. Always sorted(ascending by default)
    2. Always contain unique values
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    // one way of getting values from set
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";
    // another way of getting values from set
    for (auto val : s)
    {
        cout << val << " ";
    }

    // finding a value in set
    auto it = s.find(6);
    if (it != s.end())
    {
        cout << "Found" << "\n";
        s.erase(6); // deletes the value from set
    }
    else
    {
        cout << "Not Found" << "\n";
    }

    cout << s.count(10) << "\n"; // count function returns 1 if that value is present in set otherwise 0

    int x;
    cin >> x;
    auto it = s.lower_bound(x); // this gives equal or greater value
    if (it == s.end())
    {
        cout << "no value found" << "\n";
    }
    else
    {
        cout << *it << "\n";
    }

    auto it = s.upper_bound(x); // this gives strictly greater value
    if (it == s.end())
    {
        cout << "no value found" << "\n";
    }
    else
    {
        cout << *it << "\n";
    }
    return 0;
}