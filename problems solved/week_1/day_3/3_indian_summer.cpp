#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<pair<string, string>, pair<string, string>> mp;

    for (int i = 0; i < n; i++)
    {
        string tree, leaf;
        cin >> tree >> leaf;
        mp[{tree, leaf}] = {tree, leaf};
    }

    cout << mp.size() << "\n";
    return 0;
}