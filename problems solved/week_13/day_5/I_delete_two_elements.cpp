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
        vector<ll> a(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        ll target = 2 * sum / n;
        map<ll, ll> cnt;
        ll ans = 0;
        if ((sum - target) * n != sum * (n - 2))
        {
            cout << 0 << "\n";
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            ans += cnt[target - a[i]];
            cnt[a[i]]++;
        }
        cout << ans << "\n";
    }
    return 0;
}