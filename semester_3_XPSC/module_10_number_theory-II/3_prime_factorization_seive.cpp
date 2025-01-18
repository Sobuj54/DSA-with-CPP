// prime factorization means any number can be respresnted as factor of primes
//  ex: 30 = 2 * 3 * 5

#include <bits/stdc++.h>
using namespace std;

void seive(vector<int> &a, int n)
{
    vector<bool> prime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            a.push_back(i);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a;
    seive(a, n);

    multiset<int> m;
    int i = 0;
    while (n > 1)
    {
        while (n % a[i] == 0)
        {
            m.insert(a[i]);
            n /= a[i];
        }
        i++;
    }

    for (auto x : m)
        cout << x << " ";
    cout << "\n";
    return 0;
}