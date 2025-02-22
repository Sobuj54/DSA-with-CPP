#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<vector<ll>> vv(n, vector<ll>(n, -1));
    for (ll i = 0; i < n; ++i)
    {
        for (ll j = 0; j <= i; ++j)
        {
            vv[i][j] = (j == i ? a[i] : 0);
        }
    }

    for (ll i = 0; i < n; ++i)
    {
        ll cnt = a[i] - 1;
        ll sx = i, sy = i;
        while (cnt--)
        {
            if (sy - 1 >= 0 && vv[sx][sy - 1] == 0)
            {
                sy--;
            }
            else if (sx + 1 < n && vv[sx + 1][sy] == 0)
            {
                sx++;
            }
            vv[sx][sy] = a[i];
        }
    }

    for (ll i = 0; i < n; ++i)
    {
        for (ll j = 0; j <= i; ++j)
        {
            cout << vv[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
