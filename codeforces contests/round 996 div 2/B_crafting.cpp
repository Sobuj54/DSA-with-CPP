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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] -= x;
        }

        sort(a.begin(), a.end());
        int f = a[0], s = a[1];
        if ((f < 0 && s < 0) || (f < 0 && s == 0))
        {
            cout << "no\n";
        }
        else
        {
            if (s + f >= 0)
                cout << "yes\n";
            else
                cout << "no\n";
        }
    }
    return 0;
}