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
        ll n, m;
        cin >> n >> m;

        ll l = max(0ll, n - m), r = m + n;
        if (l == r)
            cout << l << endl;

        for (int i = 30; i >= 0; i--)
        {
            if ((r >> i & 1) && !(l >> i & 1))
            {
                cout << (l | (ll)pow(2ll, i + 1) - 1) << endl;
                break;
            }
        }
    }
    return 0;
}