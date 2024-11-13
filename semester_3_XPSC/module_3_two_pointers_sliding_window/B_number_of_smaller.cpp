#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int s = 0, f = 0, cnt = 0;
    vector<int> v;
    while (s < m)
    {
        if (f < n && a[f] < b[s])
        {
            cnt++;
            f++;
        }
        else
        {
            v.push_back(cnt);
            s++;
        }
    }

    for (int x : v)
        cout << x << " ";
    cout << "\n";
    return 0;
}