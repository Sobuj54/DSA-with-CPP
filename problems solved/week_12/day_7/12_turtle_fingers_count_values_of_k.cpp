#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, l;
        cin >> a >> b >> l;
        set<ll> ans;
        for (ll i = 0; i <= 34; ++i)
        {
            ll x = l;
            bool fail = false;
            for (ll _ = 0; _ < i; ++_)
            {
                if (x % a)
                {
                    fail = true;
                    break;
                }
                x /= a;
            }
            if (fail)
                break;
            while (true)
            {
                ans.insert(x);
                if (x % b)
                    break;
                x /= b;
            }
        }
        cout << ans.size() << "\n";
    }

    return 0;
}