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
        int n, k;
        cin >> n >> k;
        vector<int> v(n), a(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.rbegin(), v.rend());
        a[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            a[i] = a[i - 1] + v[i];
        }
        while (k--)
        {
            int val;
            cin >> val;
            int l = 0, r = n - 1;
            int idx = -1;
            while (l <= r)
            {
                int mid = (l + r) / 2;

                if (a[mid] >= val)
                {
                    idx = mid + 1;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }

            cout << idx << "\n";
        }
    }

    return 0;
}