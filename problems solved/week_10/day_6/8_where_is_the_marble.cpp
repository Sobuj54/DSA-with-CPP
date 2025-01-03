#include <bits/stdc++.h>
using namespace std;

void binarySearch(const vector<int> &a, int l, int h, int item, int &pos)
{
    pos = -1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] == item)
        {
            pos = mid;
            break;
        }
        if (item < a[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q, caseNumber = 0;

    while (cin >> n >> q && (n || q))
    {
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        cout << "CASE# " << ++caseNumber << ":\n";

        for (int i = 0; i < q; ++i)
        {
            int item, pos = -1;
            cin >> item;

            binarySearch(a, 0, n - 1, item, pos);

            if (pos == -1)
            {
                cout << item << " not found\n";
            }
            else
            {
                cout << item << " found at " << pos + 1 << "\n";
            }
        }
    }

    return 0;
}
