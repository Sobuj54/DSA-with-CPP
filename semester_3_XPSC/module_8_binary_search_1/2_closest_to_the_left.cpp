#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    while (k--)
    {
        int val;
        cin >> val;
        int l = 0, r = n - 1;
        int idx = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (a[mid] <= val)
            {
                idx = mid + 1;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (idx != -1)
            cout << idx << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}