#include <bits/stdc++.h>
using namespace std;

bool isPossible(multiset<int> m, int k)
{
    for (int i = 1; i <= k; i++)
    {
        // alice operation
        if (m.empty())
            return false;
        int val = k - i + 1;
        auto it = m.upper_bound(val);
        if (it == m.begin())
            return false;
        --it;
        m.erase(it);

        // bob operation
        if (m.empty())
            return true;
        val += *(m.begin());
        m.erase(m.begin());
        m.insert(val);
    }
    return true;
}

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
        multiset<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.insert(x);
        }
        int l = 1, r = n, k = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (isPossible(a, mid))
            {
                k = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << k << "\n";
    }
    return 0;
}