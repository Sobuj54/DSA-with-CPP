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
        ll n, k;
        cin >> n >> k;

        auto val = [&](ll mid) -> pair<ll, ll>
        {
            ll val1 = (mid + k - 1 + k) * mid / 2;
            ll val2 = (k + n - 1 + k) * n / 2 - val1;
            return {val1, val2};
        };

        ll l = 1, h = n, curr = 1;
        while (l <= h)
        {
            ll mid = (l + h) / 2;
            auto [a, b] = val(mid);

            if (b > a)
            {
                curr = mid;
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }

        auto [a1, b1] = val(curr);
        auto [a2, b2] = val(curr + 1);

        cout << min(abs(b1 - a1), abs(b2 - a2)) << endl;
    }

    return 0;
}