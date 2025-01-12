#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n;
    cin >> k >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto ok = [&](int councils)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > councils)
                sum += councils;
            else
                sum += a[i];
        }
        return (sum / councils) >= k;
    };

    int l = 0, r = 1e9;
    while (l + 1 < r)
    {
        int mid = (l + r) / 2;
        if (ok(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << l << "\n";

    return 0;
}