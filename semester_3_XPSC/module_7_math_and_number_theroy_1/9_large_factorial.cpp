#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

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
        int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact = (1LL * fact % MOD * i % MOD) % MOD;
        }
        cout << fact << "\n";
    }
    return 0;
}