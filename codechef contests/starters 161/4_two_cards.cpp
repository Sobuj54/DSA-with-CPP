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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        map<int, int> mp;
        for (int i = 0; i < n; i++)
            mp[a[i]] = max(a[i], b[i]);

        sort(a.begin(), a.end(), greater<int>());
        int bob = mp[a[0]];
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (mp[a[i]] > bob)
            {
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            if (bob > mp[a[1]])
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}