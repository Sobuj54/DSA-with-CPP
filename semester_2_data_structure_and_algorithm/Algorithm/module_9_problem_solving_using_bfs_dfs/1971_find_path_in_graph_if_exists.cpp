// https://leetcode.com/problems/find-if-path-exists-in-graph/description/

class Solution
{
public:
    vector<int> v[200005];
    bool visited[200005];

    void bfs(int src)
    {
        visited[src] = true;
        for (int child : v[src])
        {
            if (!visited[child])
            {
                bfs(child);
            }
        }
    }

    bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
    {
        for (auto nodes : edges)
        {
            int a = nodes[0];
            int b = nodes[1];
            v[a].push_back(b);
            v[b].push_back(a);
        }
        memset(visited, false, sizeof(visited));
        bfs(source);
        return visited[destination];
    }
};