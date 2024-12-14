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
        int n, k;
        cin >> n >> k;
        vector<int> v(31); // counting zero bit

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            for (int j = 30; j >= 0; j--)
            {
                if (!((x >> j) & 1))
                {
                    v[j]++;
                }
            }
        }

        int ans = 0;
        for (int i = 30; i >= 0; i--)
        {
            if (v[i] == 0)
            {
                ans += (1 << i);
            }
            else
            {
                if (v[i] <= k)
                {
                    ans += (1 << i);
                    k -= v[i];
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}