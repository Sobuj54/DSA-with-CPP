#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        bool ok = false;

        for (auto &x : v)
            cin >> x;

        ll XOR = 0;

        for (int i = 0; i < n - 1; i++)
        {
            XOR ^= v[i];
            ll checker = 0;
            int cnt = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (v[j] == 0)
                    continue;
                if (checker == XOR)
                {
                    checker = 0;
                    ++cnt;
                }
                checker ^= v[j];
            }
            if (checker == XOR)
            {
                ok = true;
                break;
            }
            else if (cnt > 0 && checker == 0)
            {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}
