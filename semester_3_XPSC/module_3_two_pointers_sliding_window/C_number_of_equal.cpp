#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int l = 0, r = 0;
    ll sum = 0;
    while (l < n && r < m)
    {
        ll cur = a[l], cnt1 = 0, cnt2 = 0;
        while (l < n && a[l] == cur)
        {
            cnt1++;
            l++;
        }

        while (r < m && b[r] < cur)
        {
            r++;
        }

        while (r < m && b[r] == cur)
        {
            cnt2++;
            r++;
        }
        sum += (cnt1 * cnt2);
    }
    cout << sum << '\n';
    return 0;
}