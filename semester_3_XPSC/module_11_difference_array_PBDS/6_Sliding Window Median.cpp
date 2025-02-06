#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mid;
    if (k % 2 == 0)
        mid = k / 2 - 1;
    else
        mid = k / 2;

    pbds<pair<int, int>> p;
    vector<int> m;
    int track = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        p.insert({a[r], r});
        if (r - l + 1 == k)
        {
            auto it = p.find_by_order(mid);
            auto [x, y] = *it;
            m.push_back(x);
            p.erase({a[track], track});
            l++;
            track = l;
        }
        r++;
    }

    for (auto val : m)
    {
        cout << val << " ";
    }
    cout << "\n";

    return 0;
}