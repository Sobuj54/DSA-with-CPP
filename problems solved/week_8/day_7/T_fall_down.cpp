#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char> > grid(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        vector<vector<char> > ans(n, vector<char>(m, '.'));
        for (int i = 0; i < m; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                if (grid[j][i] == '*')
                {
                    sum++;
                }
                else if (grid[j][i] == 'o')
                {
                    ans[j][i] = 'o';
                    for (int k = 1; k <= sum; k++)
                    {
                        ans[j - k][i] = '*';
                    }
                    sum = 0;
                }
            }
            if (sum)
            {
                for (int k = 1; k <= sum; k++)
                {
                    ans[n - k][i] = '*';
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << ans[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}