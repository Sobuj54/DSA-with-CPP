#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
        vector<int> a(n);
        ll zeros = 0, ones = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                zeros++;
            if (a[i] == 1)
                ones++;
        }

        if (!ones)
        {
            cout << 0 << '\n';
        }
        else
        {
            ll res = ones * (1LL << zeros);
            cout << res << "\n";
        }
    }
    return 0;
}