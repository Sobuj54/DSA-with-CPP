// https://leetcode.com/problems/count-sub-islands/

class Solution
{
public:
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool vis[505][505];
    int row, col;
    bool flag;

    bool isValid(int i, int j)
    {
        return i >= 0 && i < row && j >= 0 && j < col;
    }

    void dfs(int si, int sj, vector<vector<int>> &grid1, vector<vector<int>> &grid2)
    {
        vis[si][sj] = true;
        if (grid1[si][sj] == 0)
            flag = false;
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (isValid(ci, cj) && !vis[ci][cj] && grid2[ci][cj])
            {
                dfs(ci, cj, grid1, grid2);
            }
        }
    }

    int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2)
    {
        memset(vis, false, sizeof(vis));
        row = grid2.size();
        col = grid2[0].size();
        int count = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (!vis[i][j] && grid2[i][j])
                {
                    flag = true;
                    dfs(i, j, grid1, grid2);
                    if (flag)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};