/*
    characteristics of set:
    1. Always sorted(ascending by default)
    2. Contains duplicate values but in sorted manner
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (auto val : s)
    {
        cout << val << " ";
    }

    // finding a value in set
    auto it = s.find(6);
    if (it != s.end())
    {
        cout << "Found" << "\n";
        s.erase(6); // deletes the value(deletes all duplicates of that value too) from set
    }
    else
    {
        cout << "Not Found" << "\n";
    }

    // way to delete only one value if there is duplicates of that value present
    auto it = s.find(6);
    s.erase(it);

    cout << s.count(10) << "\n"; // count function returns how many times that number occurs in set

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