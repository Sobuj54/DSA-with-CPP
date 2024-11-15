#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int l = 0, r = 0, x = max(n, m);
    while (l < x && r < x)
    {
        if (l < n && r < m && a[l] <= b[r])
        {
            cout << a[l] << " ";
            l++;
        }
        else if (r < m && l < n && b[r] < a[l])
        {
            cout << b[r] << " ";
            r++;
        }
        else
        {
            if (max(n, m) == n)
            {
                cout << a[l] << " ";
                l++;
            }
            else
            {
                cout << b[r] << " ";
                r++;
            }
        }
    }
    return 0;
}