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
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        a.resize(unique(a.begin(), a.end()) - a.begin());
        int pnt = 0, ans = 0;
        for (int i = 0; i < a.size(); i++)
        {
            while (a[i] - a[pnt] >= n)
            {
                pnt++;
            }
            ans = max(ans, i - pnt + 1);
        }
        cout << ans << endl;
    }
    return 0;
}