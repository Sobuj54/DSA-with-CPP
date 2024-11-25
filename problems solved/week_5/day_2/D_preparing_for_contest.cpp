#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v;
        for (ll i = 0; i < k; i++)
        {
            v.push_back(n - i);
        }
        for (ll i = 0; i < (n - k); i++)
        {
            v.push_back(i + 1);
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}