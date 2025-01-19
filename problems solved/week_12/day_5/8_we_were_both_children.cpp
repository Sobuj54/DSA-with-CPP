#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int one = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                one++;
                continue;
            }
            if (x <= n)
            {
                mp[x]++;
            }
        }
        vector<int> v(n + 10);
        int mx = 0;
        for (int i = 2; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                v[j] += mp[i];
            }
            mx = max(mx, v[i]);
        }
        cout << mx + one << '\n';
    }
    return 0;
}