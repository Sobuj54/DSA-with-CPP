#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void DFS(ll row, ll col, vector<vector<ll>> &grid, vector<vector<ll>> &visited, ll &currSum,
         ll &maxSum, int dX[], int dY[])
{
    ll n = grid.size(), m = grid[0].size();

    visited[row][col] = 1;
    currSum += grid[row][col];

    for (int i = 0; i < 4; i++)
    {
        int newRow = row + dX[i];
        int newCol = col + dY[i];

        if (newRow >= 0 and newRow < n and newCol >= 0 and newCol < m and
            grid[newRow][newCol] != 0 and !visited[newRow][newCol])
        {
            DFS(newRow, newCol, grid, visited, currSum, maxSum, dX, dY);
        }
    }
}
void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> grid(n, vector<ll>(m, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    vector<vector<ll>> visited(n, vector<ll>(m, 0));
    int dX[] = {0, 1, 0, -1};
    int dY[] = {1, 0, -1, 0};

    ll maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] != 0 and !visited[i][j])
            {
                ll currSum = 0;
                DFS(i, j, grid, visited, currSum, maxSum, dX, dY);
                maxSum = max(maxSum, currSum);
            }
        }
    }

    cout << maxSum << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
}