#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> diff(n + 1, 0);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        diff[l] += 1;
        diff[r + 1] -= 1;
    }
    for (int i = 1; i < n; i++)
        diff[i] += diff[i - 1];

    sort(a.rbegin(), a.rend());
    sort(diff.rbegin(), diff.rend());
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (ll)a[i] * diff[i];
    }
    cout << sum << "\n";
    return 0;
}