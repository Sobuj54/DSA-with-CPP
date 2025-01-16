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
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> a(n), b(m);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<ll, ll> mp;
        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
            mp[b[i]]++;
        }
        ll ans = 0;
        map<ll, ll> fre;
        ll cnt = 0;
        for (ll i = 0; i < m; i++)
        {
            fre[a[i]]++;
            if (fre[a[i]] <= mp[a[i]])
                cnt++;
        }
        if (cnt >= k)
        {
            ans++;
        }

        for (ll i = m; i < n; i++)
        {

            fre[a[i]]++;

            if (fre[a[i]] <= mp[a[i]])
                cnt++;

            fre[a[i - m]]--;

            if (fre[a[i - m]] < mp[a[i - m]])
                cnt--;

            if (cnt >= k)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}