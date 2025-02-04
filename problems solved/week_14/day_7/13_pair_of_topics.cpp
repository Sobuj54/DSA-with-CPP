#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; ++i)
    {
        c[i] = b[i] - a[i];
    }

    sort(c.begin(), c.end());

    long long ans = 0;

    for (int i = 0; i < n; ++i)
    {
        auto it = lower_bound(c.begin() + i + 1, c.end(), -c[i]);
        ans += it - (c.begin() + i + 1);
    }

    cout << ans << "\n";
    return 0;
}
