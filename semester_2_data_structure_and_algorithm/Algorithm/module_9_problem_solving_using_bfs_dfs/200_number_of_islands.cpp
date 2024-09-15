// https://leetcode.com/problems/number-of-islands/description/

class Solution
{
public:
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool visited[305][305];
    int row, col;

    bool isValid(int i, int j)
    {
        return i >= 0 && i < row && j >= 0 && j < col;
    }

    void bfs(int si, int sj, vector<vector<char>> &grid)
    {
        queue<pair<int, int>> q;
        q.push({si, sj});
        visited[si][sj] = true;
        while (!q.empty())
        {
            pair<int, int> p = q.front();
            q.pop();
            int pi = p.first;
            int pj = p.second;
            for (int i = 0; i < 4; i++)
            {
                int ci = pi + d[i].first;
                int cj = pj + d[i].second;
                if (isValid(ci, cj) && !visited[ci][cj] && grid[ci][cj] == '1')
                {
                    visited[ci][cj] = true;
                    q.push({ci, cj});
                }
            }
        }
    }

    int numIslands(vector<vector<char>> &grid)
    {
        memset(visited, false, sizeof(visited));
        row = grid.size();
        col = grid[0].size();
        int count = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (!visited[i][j] && grid[i][j] == '1')
                {
                    count++;
                    bfs(i, j, grid);
                }
            }
        }
        return count;
    }
};