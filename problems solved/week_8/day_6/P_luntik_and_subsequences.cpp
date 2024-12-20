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
        int n, x;
        cin >> n;
        int cnt0 = 0, cnt1 = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            if (x == 0)
                cnt0++;
            if (x == 1)
                cnt1++;
        }
        ll res = (1ll << cnt0) * (ll)cnt1;
        cout << res << '\n';
    }
    return 0;
}