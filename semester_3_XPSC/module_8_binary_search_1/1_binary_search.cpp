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
        int l = 0, r = n - 1, mid = (l + r) / 2;
        bool found = false;
        while (l <= r)
        {
            if (a[mid] == val)
            {
                found = true;
                break;
            }
            if (val > a[mid])
            {
                l = mid + 1;
                mid = (l + r) / 2;
            }
            else
            {
                r = mid - 1;
                mid = (l + r) / 2;
            }
        }
        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}