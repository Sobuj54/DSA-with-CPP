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
        int n;
        cin >> n;

        int l = 1;
        int r = 1e9;
        int s = 0;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int a, x;
            cin >> a >> x;

            if (a == 1)
                l = max(l, x);
            if (a == 2)
                r = min(r, x);
            if (a == 3)
                v.push_back(x);
        }
        for (int x : v)
            if (x >= l and x <= r)
                s++;

        cout << max(r - l + 1 - s, 0) << "\n";
    }
    return 0;
}