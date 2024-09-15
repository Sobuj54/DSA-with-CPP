// https://leetcode.com/problems/max-area-of-island/

class Solution
{
public:
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool visited[55][55];
    int row, col, area;

    bool isValid(int i, int j)
    {
        return i >= 0 && i < row && j >= 0 && j < col;
    }

    void dfs(int si, int sj, vector<vector<int>> &grid)
    {
        visited[si][sj] = true;
        area++;
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (isValid(ci, cj) && !visited[ci][cj] && grid[ci][cj])
            {
                dfs(ci, cj, grid);
            }
        }
    }

    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        memset(visited, false, sizeof(visited));
        row = grid.size();
        col = grid[0].size();
        int maxArea = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (!visited[i][j] && grid[i][j] == 1)
                {
                    area = 0;
                    dfs(i, j, grid);
                    maxArea = max(maxArea, area);
                }
            }
        }
        return maxArea;
    }
};