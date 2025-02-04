#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<int> diff(n + 2, 0), prefixSum(n + 1, 0);
    for (int i = 1; i <= q; i++)
    {
        int l, r, x;
        cin >> l >> r >> x;
        diff[l] += x;
        diff[r + 1] -= x;
    }

    for (int i = 1; i <= n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + diff[i];
        a[i] += prefixSum[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}