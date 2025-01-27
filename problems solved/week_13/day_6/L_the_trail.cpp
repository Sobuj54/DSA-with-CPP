#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll> > A(n, vector<ll>(m));
    string s;
    cin >> s;

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    vector<ll> R(n), C(m);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            R[i] += A[i][j];
        }
    }
    for (ll j = 0; j < m; j++)
    {
        for (ll i = 0; i < n; i++)
        {
            C[j] += A[i][j];
        }
    }

    ll x = 0, y = 0, cnt = 0;
    while (cnt < n + m - 1)
    {
        if (s[cnt] == 'D')
        {
            A[x][y] = -R[x];
            R[x] += A[x][y];
            C[y] += A[x][y];
            x++;
        }
        else
        {
            A[x][y] = -C[y];
            R[x] += A[x][y];
            C[y] += A[x][y];
            y++;
        }
        cnt++;
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
