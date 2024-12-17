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
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> b(q);
        for (int i = 0; i < q; i++)
            cin >> b[i];

        set<int> s;

        for (int i = 0; i < q; i++)
        {
            if (s.count(b[i]))
                continue;
            s.insert(b[i]);
            for (int j = 0; j < n; j++)
            {
                if (a[j] % (1 << b[i]) == 0)
                    a[j] += (1 << (b[i] - 1));
            }
        }

        for (auto i : a)
            cout << i << " ";
        cout << '\n';
    }

    return 0;
}