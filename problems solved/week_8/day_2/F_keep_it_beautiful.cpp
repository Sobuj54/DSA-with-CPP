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
        int q;
        cin >> q;

        vector<int> a;
        int cnt = 0;

        for (int i = 0; i < q; ++i)
        {
            int x;
            cin >> x;

            int nw_cnt = cnt + (a.size() > 0 && a.back() > x);

            if (nw_cnt == 0 || (nw_cnt == 1 && x <= a[0]))
            {
                a.push_back(x);
                cnt = nw_cnt;
                cout << '1';
            }
            else
            {
                cout << '0';
            }
        }
        cout << '\n';
    }

    return 0;
}