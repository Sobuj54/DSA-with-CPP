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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        auto ok = [&](int time)
        {
            int workers = 1, l = 0, r = 0;
            while (r < n)
            {
                if (a[r] - a[l] > 2 * time)
                {
                    workers++;
                    l = r;
                }
                else
                {
                    r++;
                }
            }
            return workers <= 3;
        };

        int l = 0, r = 1e9, mid, ans;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}