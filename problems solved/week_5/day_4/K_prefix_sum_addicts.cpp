#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> s(k);
        for (ll i = 0; i < k; i++)
        {
            cin >> s[i];
        }
        if (k == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            vector<ll> v(n);
            ll j = n - 1;
            for (int i = k - 1; i >= 1; i--)
            {
                v[j] = s[i] - s[i - 1];
                j--;
            }
            while (j >= 0)
            {
                v[j] = v[j + 1];
                s[0] -= v[j];
                j--;
            }

            v[0] += s[0];
            if (is_sorted(v.begin(), v.end()))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}