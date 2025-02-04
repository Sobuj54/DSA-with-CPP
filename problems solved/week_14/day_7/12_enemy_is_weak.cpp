#include <bits/stdc++.h>
using namespace std;

const int mx = 1000006;
long long tree[2][mx], ara[mx], ara2[mx];

void update(int id, int idx, long long val)
{
    for (; idx < mx && idx; idx += idx & -idx)
        tree[id][idx] += val;
}

long long query(int id, int idx)
{
    long long ret = 0;
    for (; idx; idx -= idx & -idx)
        ret += tree[id][idx];
    return ret;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> v(1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> ara[i];
        v.push_back(ara[i]);
    }

    sort(v.begin(), v.end());
    long long ans = 0;

    for (int i = n; i > 0; i--)
    {
        int id = lower_bound(v.begin(), v.end(), ara[i]) - v.begin();
        ara2[i] = query(0, id);
        update(0, id + 1, 1);
    }

    for (int i = n; i > 0; i--)
    {
        int id = lower_bound(v.begin(), v.end(), ara[i]) - v.begin();
        ans += query(1, id);
        update(1, id + 1, ara2[i]);
    }

    cout << ans << "\n";
    return 0;
}
