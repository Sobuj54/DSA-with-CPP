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

        long long s = accumulate(a.begin(), a.end(), 0ll);
        long long ans = 1, cur = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cur += a[i];
            s -= a[i];
            ans = max(ans, __gcd(s, cur));
        }
        cout << ans << "\n";
    }
    return 0;
}