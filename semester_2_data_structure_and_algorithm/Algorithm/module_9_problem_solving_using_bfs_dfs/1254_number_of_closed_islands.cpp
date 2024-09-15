// https://leetcode.com/problems/number-of-closed-islands/

class Solution
{
public:
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool vis[105][105], flag;
    int row, col;

    bool isValid(int i, int j)
    {
        return i >= 0 && i < row && j >= 0 && j < col;
    }

    void dfs(int si, int sj, vector<vector<int>> &grid)
    {
        vis[si][sj] = true;
        if (si == 0 || si == row - 1 || sj == 0 || sj == col - 1)
            flag = false;
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 0)
            {
                dfs(ci, cj, grid);
            }
        }
    }

    int closedIsland(vector<vector<int>> &grid)
    {
        memset(vis, false, sizeof(vis));
        row = grid.size();
        col = grid[0].size();
        int count = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (!vis[i][j] && grid[i][j] == 0)
                {
                    flag = true;
                    dfs(i, j, grid);
                    if (flag)
                        count++;
                }
            }
        }
        return count;
    }
};