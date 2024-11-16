#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        long long ans = 0, len = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= q)
                len += 1;
            else
            {

                if (len >= k)
                    ans += (len - k + 1) * (len - k + 2) / 2;
                len = 0;
            }
        }

        if (len >= k)
            ans += (len - k + 1) * (len - k + 2) / 2;
        cout << ans << "\n";
    }
    return 0;
}