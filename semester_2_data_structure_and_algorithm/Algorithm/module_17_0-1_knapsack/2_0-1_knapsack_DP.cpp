// 0/1 knapsack top down approach

#include <bits/stdc++.h>
using namespace std;

int dp[1000][1000];

int knapsack(int n, int weight[], int value[], int w)
{
    if (n < 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];

    if (weight[n] <= w)
    {
        int option1 = knapsack(n - 1, weight, value, w - weight[n]) + value[n];
        int option2 = knapsack(n - 1, weight, value, w);
        return dp[n][w] = max(option1, option2);
    }
    else
    {
        return dp[n][w] = knapsack(n - 1, weight, value, w);
    }
}

int main()
{
    int n;
    cin >> n;
    int weight[n], value[n], w;
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }

    cin >> w;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << knapsack(n - 1, weight, value, w);
    return 0;
}