#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll totalChocolates = 0;

    ll divisibleByA = n / a;
    ll divisibleByB = n / b;
    ll divisibleByAandB = n / LCM(a, b);

    if (p > q)
    {
        totalChocolates += (p * divisibleByA) + (q * (divisibleByB - divisibleByAandB));
    }
    else
    {
        totalChocolates += (q * divisibleByB) + (p * (divisibleByA - divisibleByAandB));
    }

    cout << totalChocolates << "\n";
    return 0;
}