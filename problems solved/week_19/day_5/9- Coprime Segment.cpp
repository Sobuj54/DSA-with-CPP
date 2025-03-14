#include <bits/stdc++.h>
using namespace std;

#define int long long

const int INF = 1e18;

int n;
vector<int> a, segTree;

void build(int node, int start, int end)
{
    if (start == end)
    {
        segTree[node] = a[start];
        return;
    }
    int mid = (start + end) / 2;
    build(2 * node, start, mid);
    build(2 * node + 1, mid + 1, end);
    segTree[node] = __gcd(segTree[2 * node], segTree[2 * node + 1]);
}

int query(int node, int start, int end, int L, int R)
{
    if (R < start || L > end)
        return 0;
    if (L <= start && end <= R)
        return segTree[node];
    int mid = (start + end) / 2;
    return __gcd(query(2 * node, start, mid, L, R),
                 query(2 * node + 1, mid + 1, end, L, R));
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    a.resize(n);
    segTree.resize(4 * n, 0);

    for (int &x : a)
        cin >> x;

    build(1, 0, n - 1);

    int ans = INF, left = 0;

    for (int right = 0; right < n; right++)
    {
        while (left <= right && query(1, 0, n - 1, left, right) == 1)
        {
            ans = min(ans, right - left + 1);
            left++;
        }
    }

    cout << (ans == INF ? -1 : ans) << '\n';
    return 0;
}
