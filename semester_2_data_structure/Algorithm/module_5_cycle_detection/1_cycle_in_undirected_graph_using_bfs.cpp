#include <bits/stdc++.h>
using namespace std;

const int N = 1e+5;
vector<int> adj[N];
bool vis[N];
int parentArray[N];
bool found;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty() && !found)
    {
        int parent = q.front();
        q.pop();
        for (int child : adj[parent])
        {
            if (vis[child] && parentArray[parent] != child)
            {
                found = true;
            }
            if (!vis[child])
            {
                vis[child] = true;
                parentArray[child] = parent;
                q.push(child);
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
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
    found = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            bfs(i);
        }
    }
    if (found)
        cout << "cycle found";
    else
        cout << "cycle not found";
    return 0;
}