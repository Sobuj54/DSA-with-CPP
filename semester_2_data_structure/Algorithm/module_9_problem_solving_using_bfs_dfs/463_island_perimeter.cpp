class Solution
{
public:
    vector<pair<int, int>> p = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
    bool visited[105][105];
    int row, col, perimeter;

    bool isValid(int i, int j)
    {
        return i >= 0 && i < row && j >= 0 && j < col;
    }

    void dfs(int si, int sj, vector<vector<int>> &grid)
    {
        visited[si][sj] = true;
        for (int i = 0; i < 4; i++)
        {
            int ci = si + p[i].first;
            int cj = sj + p[i].second;
            if (isValid(ci, cj))
            {
                if (grid[ci][cj] == 0)
                    perimeter++;
                if (!visited[ci][cj] && grid[ci][cj] == 1)
                {
                    dfs(ci, cj, grid);
                }
            }
            else
            {
                perimeter++;
            }
        }
    }

    int islandPerimeter(vector<vector<int>> &grid)
    {
        memset(visited, false, sizeof(visited));
        row = grid.size();
        col = grid[0].size();
        perimeter = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (!visited[i][j] && grid[i][j] == 1)
                {
                    dfs(i, j, grid);
                }
            }
        }
        return perimeter;
    }
};