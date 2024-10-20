#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int unbounded_knapsack(int n, int items[], int weights[], int w)
{
    if (n < 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];
    if (weights[n] <= w)
    {
        int byTaking = unbounded_knapsack(n, items, weights, w - weights[n]) + items[n];
        int byNotTaking = unbounded_knapsack(n - 1, items, weights, w);
        return dp[n][w] = max(byTaking, byNotTaking);
    }
    else
    {
        return dp[n][w] = unbounded_knapsack(n - 1, items, weights, w);
    }
}

int main()
{
    int n;
    cin >> n;
    int val[n], pieces[n];
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
        pieces[i] = i + 1;
    }

    memset(dp, -1, sizeof(dp));
    cout << unbounded_knapsack(n - 1, val, pieces, n);
    return 0;
}