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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        bool sameValues = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i + 1])
                sameValues = false;
        }

        if (sameValues)
        {
            cout << "NO\n";
            continue;
        }

        int district;
        cout << "YES\n";
        for (int i = 2; i <= n; i++)
        {
            if (a[i] != a[1])
            {
                cout << 1 << " " << i << "\n";
                district = i;
            }
        }
        for (int i = 2; i <= n; i++)
        {
            if (a[1] == a[i])
                cout << district << " " << i << "\n";
        }
    }
    return 0;
}