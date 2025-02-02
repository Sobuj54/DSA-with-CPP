#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime(ll x)
{
    if (x == 1)
        return false;
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

bool isPerfectSquare(ll n)
{
    ll x = sqrtl(n);
    return x * x == n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (isPerfectSquare(x) && isPrime(sqrtl(x)))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}