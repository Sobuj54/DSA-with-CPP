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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll maxo = 0, zero = 0, one = 0;

        for (ll i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                maxo += one;
                zero++;
            }
            else
            {
                one++;
            }
        }

        ll count1 = 0, maxo1 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                zero--;
                maxo1 = max(maxo1, maxo - count1 + zero);
            }
            else if (v[i] == 1)
            {
                count1++;
            }
        }

        ll count0 = 0, maxo2 = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (v[i] == 1)
            {
                one--;
                maxo2 = max(maxo2, maxo + one - count0);
            }
            else
            {
                count0++;
            }
        }
        cout << max({maxo, maxo1, maxo2}) << endl;
    }
    return 0;
}