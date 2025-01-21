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
        ll a, b;
        cin >> a >> b;
        while (__gcd(a, b) > 1)
        {
            b /= __gcd(a, b);
        }
        if (b > 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}