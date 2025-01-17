
// sieve algorithm finds all the prime numbers in a range from 2-N

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<bool> prime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i * 2; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            cout << i << ' ';
    }
    return 0;
}