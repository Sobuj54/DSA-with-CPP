#include <bits/stdc++.h>
using namespace std;

int evenDivisor(int n)
{
    int divisors = 0;
    for (int i = 2; i <= n; i += 2)
    {
        if (n % i == 0)
            divisors++;
    }
    return divisors;
}
int oddDivisor(int n)
{
    int divisors = 0;
    for (int i = 1; i <= n; i += 2)
    {
        if (n % i == 0)
            divisors++;
    }
    return divisors;
}

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

        if (evenDivisor(n) > oddDivisor(n))
            cout << 1 << "\n";
        else if (evenDivisor(n) < oddDivisor(n))
            cout << -1 << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}