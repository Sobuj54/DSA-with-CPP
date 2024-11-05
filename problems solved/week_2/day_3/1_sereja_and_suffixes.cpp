#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, count = 0;
    cin >> n >> m;
    map<int, bool> mp;
    vector<int> v(n), temp(n);

    for (int i = 0; i < n; i++)
    {
        cin >> temp[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (mp.find(temp[i]) == mp.end())
        {
            count++;
            v[i] = count;
        }
        else
        {
            v[i] = count;
        }
        mp[temp[i]] = true;
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        --x;
        cout << v[x] << "\n";
    }

    return 0;
}