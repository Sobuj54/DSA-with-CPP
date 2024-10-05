#include <iostream>
using namespace std;

int dp[100][100];

bool subset_sum(int n, int arr[], int s)
{
    if (n < 0)
    {
        return s == 0 ? true : false;
    }
    if (dp[n][s] != -1)
        return dp[n][s];

    if (arr[n] <= s)
    {
        bool byTaking = subset_sum(n - 1, arr, s - arr[n]);
        bool byNotTaking = subset_sum(n - 1, arr, s);
        return dp[n][s] = byTaking || byNotTaking;
    }
    else
    {
        return dp[n][s] = subset_sum(n - 1, arr, s);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int s;
    cin >> s;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            dp[i][j] = -1;
        }
    }

    if (subset_sum(n - 1, arr, s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}