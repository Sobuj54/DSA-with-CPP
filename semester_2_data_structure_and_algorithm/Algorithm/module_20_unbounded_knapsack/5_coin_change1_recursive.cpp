#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int coin_change(int n, int coins[], int s)
{
    if (n < 0)
    {
        return s == 0 ? 1 : 0;
    }
    if (dp[n][s] != -1)
        return dp[n][s];
    if (coins[n] <= s)
    {
        int byTaking = coin_change(n, coins, s - coins[n]);
        int byNotTaking = coin_change(n - 1, coins, s);
        return dp[n][s] = byTaking + byNotTaking;
    }
    else
    {
        return dp[n][s] = coin_change(n - 1, coins, s);
    }
}

int main()
{
    int n;
    cin >> n;
    int coins[n];
    for (int i = 0; i < n; i++)
        cin >> coins[i];

    int s;
    cin >> s;

    memset(dp, -1, sizeof(dp));
    cout << coin_change(n - 1, coins, s);

    return 0;
}