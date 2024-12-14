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
        ll n;
        cin >> n;
        vector<ll> a;
        a.push_back(n);

        for (int i = __lg(n); i >= 0; i--)
        {
            if ((n >> i) & 1)
            {
                if ((n & (~(1ll << i))))
                    a.push_back((n - (1ll << i)));
            }
        }

        cout << a.size() << "\n";
        sort(a.begin(), a.end());
        for (auto x : a)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}