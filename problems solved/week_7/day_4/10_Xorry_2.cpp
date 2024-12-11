#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll x1 = x;
        vector<int> v;
        while (x1 != 0)
        {
            if (x1 % 2 == 0)
            {
                v.push_back(0);
            }
            else
            {
                v.push_back(1);
            }
            x1 = x1 >> 1;
        }

        ll i, c1 = 0, j = 0;
        for (i = v.size() - 1; i >= 0; i--)
        {
            if (v[i] == 1)
            {

                j++;
            }
            else
            {
                if (j >= 2)
                    c1++;
            }
        }
        cout << (1 << c1) << endl;
    }

    return 0;
}