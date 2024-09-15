#include <bits/stdc++.h>
using namespace std;

vector<int> v[10005];
bool visited[1005];
int level[1005];
int par[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int child : v[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
                par[child] = parent;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(par, -1, sizeof(par));
    int src, des;
    cin >> src >> des;
    bfs(src);

    vector<int> path;
    int x = des;
    while (x != -1)
    {
        path.push_back(x);
        x = par[x];
    }
    reverse(path.begin(), path.end());
    for (int val : path)
    {
        cout << val << endl;
    }
}