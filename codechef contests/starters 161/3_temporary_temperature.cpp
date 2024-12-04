#include <bits/stdc++.h>
using namespace std;

bool isValid(int mid, vector<int> &a, int n, int k)
{
    int l = 0, r = 0, count = 1;
    int mx = a[l], mn = a[l];
    while (r < n)
    {
        mx = max(mx, a[r]);
        mn = min(mn, a[r]);
        int range = (mx - mn + 1) / 2;
        if (range <= mid)
        {
            r++;
        }
        else
        {
            count++;
            l = r;
            mn = a[l], mx = a[r];
            r++;
        }
    }
    return count <= k + 1;
}

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = 0, r = 1e9, ans = -1;
        while (l <= r)
        {
            int mid = (r + l) / 2;
            if (isValid(mid, a, n, k))
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