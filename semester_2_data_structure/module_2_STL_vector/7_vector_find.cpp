#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 20, 10, 20, 32, 50, 45};

    auto it = find(v.begin(), v.end(), 100); // this returns iterator

    // cout << *it; this shows the value

    if (it == v.end())
        cout << "Not found";
    else
        cout << "found.";
    return 0;
}