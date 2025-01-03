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
        int firstIdx = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (a[mid] == val)
            {
                firstIdx = mid + 1;
                r = mid - 1;
            }
            else if (a[mid] > val)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        l = 0, r = n - 1;
        int lastIdx = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (a[mid] == val)
            {
                lastIdx = mid + 1;
                l = mid + 1;
            }
            else if (a[mid] > val)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (lastIdx != -1 || firstIdx != -1)
            cout << (lastIdx - firstIdx + 1) << "\n";
        else
            cout << "Not found\n";
    }
    return 0;
}