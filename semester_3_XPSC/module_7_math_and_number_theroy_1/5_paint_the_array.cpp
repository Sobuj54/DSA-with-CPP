#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll GCD(const vector<ll> &v)
{
    ll res = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        res = __gcd(res, v[i]);
        if (res == 1)
            return 1;
    }
    return res;
}

bool isDivisible(ll x, const vector<ll> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % x == 0)
            return true;
    }
    return false;
}

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
        vector<ll> a, b;
        for (int i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            if (i % 2 == 0)
                a.push_back(x);
            else
                b.push_back(x);
        }

        ll g1 = GCD(a);
        ll g2 = GCD(b);

        bool paintA = isDivisible(g1, b);
        if (!paintA)
        {
            cout << g1 << "\n";
            continue;
        }

        bool paintB = isDivisible(g2, a);
        if (!paintB)
            cout << g2 << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}