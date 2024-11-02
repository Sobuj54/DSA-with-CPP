#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mp[a]++;
    }

    int mx = 0;
    for (auto [x, y] : mp)
    {
        mx = max(y, mx);
    }

    cout << mx << "\n";
    return 0;
}