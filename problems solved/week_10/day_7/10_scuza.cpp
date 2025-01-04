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
        vector<long long> a;
        a.push_back(0);
        vector<int> p;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(a.back() + x);
            if (i == 0)
            {
                p.push_back(x);
            }
            else
            {
                p.push_back(max(p.back(), x));
            }
        }
        for (int i = 0; i < q; i++)
        {
            int k;
            cin >> k;
            int ind = upper_bound(p.begin(), p.end(), k) - p.begin();
            cout << a[ind] << " ";
        }
        cout << endl;
    }
    return 0;
}