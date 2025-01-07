#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max1 = 1e10;

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] <= max1)
        {
            max1 = min(max1, a[i]);
        }
        else
        {
            vector<int> v1;
            int z1 = a[i];
            while (z1 > 0)
            {
                v1.push_back((z1 % 10));
                z1 = z1 / 10;
            }

            for (int j = 0; j < v1.size(); j++)
            {
                if (v1[j] > max1)
                {
                    cout << "NO" << endl;
                    return;
                }
                else
                {
                    max1 = min(max1, v1[j]);
                }
            }
        }
    }
    cout << "YES" << endl;
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}