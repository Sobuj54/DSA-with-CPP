#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    if (isPrime(n))
    {
        cout << 1 << "\n";
    }
    else if (n % 2 == 0)
    {
        cout << 2 << '\n';
    }
    else
    {
        if (isPrime(n - 2))
        {
            cout << 2 << '\n';
        }
        else
        {
            cout << 3 << "\n";
        }
    }
    return 0;
}