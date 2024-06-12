#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    while (q--)
    {
        int l = 0, r = n - 1, search;
        cin >> search;
        bool flag = false;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == search)
            {
                cout << "found" << endl;
                flag = true;
                break;
            }
            else if (search > v[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }
        if (!flag)
            cout << "not found" << endl;
    }

    return 0;
}