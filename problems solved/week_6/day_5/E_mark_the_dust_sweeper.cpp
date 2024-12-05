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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        ll ans = 0;
        int l = 0;
        while (l < n && a[l] == 0)
            l++;
        for (int i = l; i < n - 1; ++i)
        {
            ans += a[i];
            if (a[i] == 0)
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}