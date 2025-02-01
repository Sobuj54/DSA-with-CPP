#include <bits/stdc++.h>
using namespace std;

int a[100005];
long long q[100005];
long long p[100005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    vector<pair<int, int> > range(m + 1);
    vector<long long> val(m + 1);
    for (int i = 1; i <= m; i++)
    {
        int l, r, x;
        cin >> l >> r >> x;
        range[i] = {l, r};
        val[i] = x;
    }

    for (int i = 1; i <= k; i++)
    {
        int x, y;
        cin >> x >> y;
        q[x]++;
        q[y + 1]--;
    }

    for (int i = 1; i <= m; i++)
        q[i] += q[i - 1];
    for (int i = 1; i <= m; i++)
        val[i] *= q[i];

    for (int i = 1; i <= m; i++)
    {
        int l = range[i].first;
        int r = range[i].second;
        p[l] += val[i];
        p[r + 1] -= val[i];
    }

    for (int i = 1; i <= n; i++)
        p[i] += p[i - 1];
    for (int i = 1; i <= n; i++)
        cout << p[i] + a[i] << " ";

    return 0;
}
